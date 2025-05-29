#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SurvivalPlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInventory;

UCLASS()
class SURVIVALCOURSE_API ASurvivalPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASurvivalPlayerCharacter();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

private:
#pragma region Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UInventory* InventoryComponent;
#pragma endregion
};
