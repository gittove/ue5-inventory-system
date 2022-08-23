// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"
#include "ItemBase.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	Capacity = 20;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (auto& Item : DefaultItems)
	{
		AddItem(Item);
	}
}

bool UInventoryComponent::AddItem(UItemBase* Item)
{
	if (HeldItems.Num() >= Capacity || !Item)
	{
		return false;
	}
	
	Item->ParentInventory = this;
	Item->World = GetWorld();
	
	HeldItems.Add(Item);
	OnInventoryUpdated.Broadcast();

	return true;
}

bool UInventoryComponent::RemoveItem(UItemBase* Item)
{
	if (!Item)
	{
		return false;
	}
	
	Item->ParentInventory = nullptr;
	Item->World = nullptr;
	
	DefaultItems.RemoveSingle(Item);
	OnInventoryUpdated.Broadcast();
	
	return true;
}

