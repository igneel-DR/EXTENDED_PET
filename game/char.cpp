
/* «÷› ›Ì √Œ— «·Ê—ﬁ… */

#ifdef ENABLE_EXTENDED_PET_SYSTEM
void CHARACTER::CheckPet()
{
	for (int i = 0; i < INVENTORY_MAX_NUM; ++i)
	{
		LPITEM item = GetInventoryItem(i);
		CPetSystem* petSystem = GetPetSystem();
		if (!item)
			continue;
		if (item->GetType() == ITEM_PET)
		{
			if (petSystem)
			{
				if (item->GetSocket(2) == true)
				{
					petSystem->Summon(item->GetValue(0), item, 0, false);
					item->SetSocket(2,true);
					item->Lock(true);
				}
			}
		}
	}
}
#endif