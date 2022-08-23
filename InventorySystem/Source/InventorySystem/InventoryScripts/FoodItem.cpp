
#include "FoodItem.h"
#include "InventorySystem/InventorySystemCharacter.h"
#include "InventoryComponent.h"

void UFoodItem::Use(AInventorySystemCharacter* Character)
{
	if (ParentInventory)
	{
		ParentInventory->RemoveItem(this);
	}
	
	Super::Use(Character);
}
