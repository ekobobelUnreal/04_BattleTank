#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void Tick(float DeltaSeconds) override;
	
	// how close can AI tank get to player
	float AcceptanceRadius = 3000;	
};
