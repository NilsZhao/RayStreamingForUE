#pragma once
#include <concrt.h>

#include "RayConnector.h"


class FReconnectTask
{
public:
	friend class FAsyncTask<FReconnectTask>;

	FRayConnector* RayConnector;
	
	FReconnectTask(FRayConnector* InConnector)
	 : RayConnector(InConnector)
	{
	}
	
	void DoWork()
	{
		while (RayConnector)
		{
#if WITH_EDITOR
			if(GEngine)
			{
				
				if(GEngine->GetWorldContexts().Num() == 1)
				{
					return;
				}
			}
#endif
			if(RayConnector && RayConnector->ShouldReconnect() && !RayConnector->IsConnected())
			{
				RayConnector->AutoConnect();
			}

			Concurrency::wait(1000);
			
		}

		UE_LOG(LogTemp, Log, TEXT("Reconnect task ends."));
	}
	
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(ReconnectTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	bool CanAbandon()
	{
		return !RayConnector;
	}
	void Abandon()
	{
	}
};
