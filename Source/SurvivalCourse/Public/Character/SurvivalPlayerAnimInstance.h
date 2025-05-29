#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SurvivalPlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALCOURSE_API USurvivalPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	bool bIsItemEquipped = false;
};
