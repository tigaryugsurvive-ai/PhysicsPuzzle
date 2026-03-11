#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerMoveController.generated.h"

UINTERFACE(MinimalAPI)
class UPlayerMoveController : public UInterface
{
	GENERATED_BODY()
};

class PlayerMoveController
{
	GENERATED_BODY()

public:
	virtual void Move(class APlayerBall * Ball, float DeltaTime) = 0;
};