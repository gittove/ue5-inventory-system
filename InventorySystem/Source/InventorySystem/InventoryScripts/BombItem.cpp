
#include "BombItem.h"
#include "Components/SphereComponent.h"

UBombItem::UBombItem()
{
	
}

void UBombItem::Use(AInventorySystemCharacter* Character)
{
	// spawn bomber
	
	Super::Use(Character);
}
