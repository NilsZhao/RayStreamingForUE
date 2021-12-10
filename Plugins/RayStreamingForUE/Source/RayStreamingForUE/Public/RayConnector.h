#pragma once

class FReconnectTask;
class URayStreamer;
class FRayInputDevice;
class IWebSocket;
class URayStreamingComponent;

class FRayConnector
{
public:
	FRayConnector();
	~FRayConnector();

	void StartReconnectTask();
	
	void BindEvents();
	void UnbindEvents() const;


	/**
	 *自动连接, 若为编辑器模式(开发环境), 则连接到插件设置中的url, 若为打包模式(线上环境), 则连接至3dccat.live
	 */
	void AutoConnect();
	
	/**
	 *连接到3dcat, 端口会通过命令行获取.
	 */
	void ConnectTo3dcat();

	/**
	 *查询是否处于连接状态.
	 */
	bool IsConnected() const;
	
	/**
	 * 根据指定的URL建立一个新的WebSocket连接, 原有的链接将会被自动关闭.
	 * @param NewUrl 需要进行连接的url
	 */
	void ConnectToUrl(FString NewUrl);

	/**
	 *发送一个字符串到服务端.
	 */
	bool SendMessage(const FString& Message) const;

	/**
	 *发送一个二进制数组到服务端.
	 */
	bool SendData(const TArray<uint8>& Data, bool bIsBinary = false) const;

	/**
	 *关闭当前连接.
	 */
	void Disconnect();
	
	/**
	 *注册一个控制台命令, 允许web端通过raystreaming远程调用.
	 */
	void RegisterConsoleCommand(FString CommandName);

	/**
	 *注销一个控制台命令.
	 */
	void UnregisterConsoleCommand(FString CommandName);

	/**
	 *查检测命令是否注册.
	 */
	bool IsCommandRegistered(FString Command) const;

	TSharedPtr<FRayInputDevice> GetInputDevicePtr() const;
	
	void SetInputDevice(TSharedPtr<FRayInputDevice> NewInputDevice);

	bool IsRayStreamingComponentRegistered(URayStreamingComponent* RayComp) const;
	void RegisterRayStreamingComponent(URayStreamingComponent* RayComp);
	void UnregisterRayStreamingComponent(URayStreamingComponent* RayComp);
	TArray<URayStreamingComponent*> GetRegisteredStreamingComponent() const;

	bool ShouldReconnect() const;
private:
	TSharedPtr<FRayInputDevice> InputDevice = nullptr;
	TSharedPtr<IWebSocket> Socket = nullptr;

	TArray<URayStreamingComponent*> StreamingComponents;
	
	FDelegateHandle OnConnectHandle;
	FDelegateHandle OnConnectErrorHandle;
	FDelegateHandle OnMessageHandle;
	FDelegateHandle OnRawMessageHandle;
	FDelegateHandle OnMessageSentHandle;
	FDelegateHandle OnCloseHandle;

	//是否启用自动重连功能, 当意外断开或连接失败时, 定时自动重连.
	bool bEnableAutoReconnect = true;
	//重连间隙, 读取自插件设置.
	float ReconnectInterval = 1;
	
	//是否应该进行一次重连.
	bool bReconnectFlag = false;

	FAsyncTask<FReconnectTask>* ReconnectTask = nullptr;

	FCriticalSection Mutex;

	TArray<FString> RegisteredCommands;

	void RunConsoleCommand(const FString& CommandMessage);
};

