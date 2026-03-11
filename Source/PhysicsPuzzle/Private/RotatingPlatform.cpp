#include "RotatingPlatform.h"

ARotatingPlatform::ARotatingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	RotationSpeed = FRotator(0.f, 60.f, 0.f); // 1•b‚Å69“x‰ñ“]
}

void ARotatingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(RotationSpeed * DeltaTime);
}