// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
	public:
		ATank();

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

		void DrawDebugSphereUnderCursor();
		void HandleDestruction();

		APlayerController* GetTankPlayerController() const {return PlayerControllerRef;} 

		bool bAlive = true;

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	private:
		UPROPERTY(VisibleAnywhere, Category="Components")
		class USpringArmComponent* SpringArm;
		UPROPERTY(VisibleAnywhere, Category="Components")
		class UCameraComponent* Camera;
		UPROPERTY(EditAnywhere, Category="Components")
		float Speed = 200.f;
		UPROPERTY(EditAnywhere, Category="Components")
		float TurnRate = 45.f;

		void Move(float Value);
		void Turn(float Value);

		APlayerController* PlayerControllerRef;

	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;

};
