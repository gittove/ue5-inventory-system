
#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "BombItem.generated.h"

class USphereComponent;

UCLASS()
class INVENTORYSYSTEM_API UBombItem : public UItemBase
{
	GENERATED_BODY()

protected:

	UBombItem();
	
	virtual void Use(AInventorySystemCharacter* Character) override;

public:

	UPROPERTY(EditDefaultsOnly)
	float Radius = 2.0f;

	UPROPERTY(EditDefaultsOnly)
	float Damage = 50.0f;
	
};
