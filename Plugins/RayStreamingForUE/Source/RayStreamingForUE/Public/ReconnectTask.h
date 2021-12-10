#pragma once
#include <concrt.h>

#include "RayConnector.h"

class FReconnectTask : public FNonAbandonableTask
{
	friend class FAsyncTask<FReconnectTask>;

	TSharedPtr<FRayConnector> RayConnector;
	
	FReconnectTask(TSharedPtr<FRayConnector> InConnector)
	 : RayConnector(InConnector)
	{
	}

	void DoWork()
	{
		while (true)
		{
#if WITH_EDITOR
			if(GEngine)
			{
				//检测是否处于PIE状态.
				if(GEngine->GetWorldContexts().Num() > 1)//PIE模式有两个World: GameWorld&EditorWorld; Editor模式只有一个EditorWorld.
				{
					if(RayConnector && RayConnector->ShouldReconnect() && !RayConnector.Get()->IsConnected())
					{
						RayConnector.Get()->AutoConnect();
					}
				}
			}
#else
			if(RayConnector && RayConnector->ShouldReconnect() && !RayConnector.Get()->IsConnected())
			{
				RayConnector.Get()->AutoConnect();
			}
#endif

			Concurrency::wait(1000);
			
		}
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(ReconnectTask, STATGROUP_ThreadPoolAsyncTasks);
	}
};
