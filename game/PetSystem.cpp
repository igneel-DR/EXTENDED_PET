/* ÇÓÊÈÏá 

void CPetActor::SetName()

 */


#ifdef ENABLE_EXTENDED_PET_SYSTEM
void CPetActor::SetName()
{
	char buf[64];
	if (0 != m_pkOwner && 0 != m_pkOwner->GetName())
		snprintf(buf, sizeof(buf), "%s - %s", m_pkOwner->GetName(), m_pkChar->GetMobTable().szLocaleName);
	else
		snprintf(buf, sizeof(buf), "%s", m_pkChar->GetMobTable().szLocaleName);

	if (true == IsSummoned())
		m_pkChar->SetName(buf);

	m_name = buf;
}
#else
void CPetActor::SetName(const char* name)
{
	std::string petName = m_pkOwner->GetName();

	if (0 != m_pkOwner &&
		0 == name &&
		0 != m_pkOwner->GetName())
	{
		petName += "'s Pet";
	}
	else
		petName += name;

	if (true == IsSummoned())
		m_pkChar->SetName(petName);

	m_name = petName;
}
#endif


/*  ÇÓÊÈÏá
	this->SetName();
*/
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	this->SetName();
#else
	this->SetName(petName);
#endif


/* ÇÖÝåÇ ÝæÞ

size_t CPetSystem::CountSummoned() const

 */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
bool CPetSystem::IsActivePet()
{
	bool state = false;
	for (TPetActorMap::iterator iter = m_petActorMap.begin(); iter != m_petActorMap.end(); ++iter)
	{
		CPetActor* petActor = iter->second;
		if (petActor != 0)
		{
			if (petActor->IsSummoned()) {
				state = true;
				break;
			}
		}
	}
	return state;
}
#endif



void CPetActor::SetSummonItem(LPITEM pItem)
{
	if (NULL == pItem)
	{
		LPITEM pSummonItem = ITEM_MANAGER::instance().FindByVID(m_dwSummonItemVID);
		if (NULL != pSummonItem)
#ifdef ENABLE_EXTENDED_PET_SYSTEM
			pSummonItem->SetSocket(1, false);
#endif
		m_dwSummonItemVID = 0;
		m_dwSummonItemVnum = 0;
		return;
	}
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	pItem->SetSocket(1, true);
#endif
	m_dwSummonItemVID = pItem->GetVID();
	m_dwSummonItemVnum = pItem->GetVnum();
}