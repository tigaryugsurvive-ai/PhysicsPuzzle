#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerBall.generated.h"

class PlayerMoveController;

UCLASS()
class PHYSICSPUZZLE_API APlayerBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBall();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:	
	UPROPERTY(EditAnywhere, Category = "Movement")
	TScriptInterface<PlayerMoveController> MoveController;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
};
