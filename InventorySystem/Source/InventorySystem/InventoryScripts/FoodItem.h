#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "FoodItem.generated.h"

UCLASS()
class INVENTORYSYSTEM_API UFoodItem : public UItemBase
{
	GENERATED_BODY()


protected:
	virtual void Use(AInventorySystemCharacter* Character) override;
	
};
