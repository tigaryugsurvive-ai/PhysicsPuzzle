#pragma once

#include "UObject/Interface.h"
#include "IPlayerMoveController.generated.h"

UINTERFACE(MinimalAPI)
class UPlayerMoveController : public UInterface
{
	GENERATED_BODY()
};

class IPlayerMoveController
{
	GENERATED_BODY()

public:
	virtual void Move(class ABall* Ball, flaot DeltaTime) = 0;
};