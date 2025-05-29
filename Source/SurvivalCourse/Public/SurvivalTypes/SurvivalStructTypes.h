#pragma once

#include "SurvivalStructTypes.generated.h"

class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSurvivalItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FName ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ItemQuantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	UStaticMesh* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	bool bCanCraft = false;
};
