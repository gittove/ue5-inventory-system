#include "ItemBase.h"

UItemBase::UItemBase()
{
	Weight = 1.0f;
	DisplayText = FText::FromString("New Item");
	UseActionText = FText::FromString("Use");
}
