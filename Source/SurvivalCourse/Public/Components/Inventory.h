#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivalTypes/SurvivalStructTypes.h"
#include "Inventory.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SURVIVALCOURSE_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	UInventory();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TArray<FSurvivalItemData> ItemData;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	UDataTable* ItemDataTable;
};
