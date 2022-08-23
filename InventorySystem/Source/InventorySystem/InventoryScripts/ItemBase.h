#pragma once

#include "ItemBase.generated.h"

class UInventoryComponent;

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class INVENTORYSYSTEM_API UItemBase : public UObject
{
	GENERATED_BODY()

public:
	UItemBase();

	virtual void Use(class AInventorySystemCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(AInventorySystemCharacter* Character);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item")
	FText UseActionText;

	// this probably shouldn't be a mesh, it should be a spawnable actor dude
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item")
	UStaticMesh* PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item")
	UTexture2D* Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item")
	FText DisplayText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item", meta = (MultiLine = true))
	FText DescriptionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item", meta = (ClampMin = 0.0))
	float Weight;

	UPROPERTY()
	UInventoryComponent* ParentInventory;

	UPROPERTY(Transient)
	UWorld* World;

	virtual UWorld* GetWorld() const { return World; };
};