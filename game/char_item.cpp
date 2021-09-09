/* ÈÍË Úä */
#include "shop.h"

/* ÇÖÝ */ 
#ifdef ENABLE_EXTENDED_PET_SYSTEM
#include "PetSystem.h"
#endif


/* ÇÈÍË */
	case ITEM_NONE:
		sys_err("Item type NONE %s", item->GetName());
		break;


/* ÇÖÝ ÝæÞ */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	case ITEM_PET:
	{
		switch (item->GetSubType())
		{
			case PET_PAY:
			{
				CPetSystem* petSystem = GetPetSystem();
				if (!petSystem)
					return false;

				if (GetPetSystem()->IsActivePet())
				{
					petSystem->Unsummon(item->GetValue(0));
					item->SetSocket(2,false);
					item->Lock(false);
				}
				else
				{
					petSystem->Summon(item->GetValue(0), item, 0, false);
					item->SetSocket(2,true);
					item->Lock(true);
				}
			}
			break;
		}
	}
	break;
#endif
