
/* «»ÕÀ ⁄‰ */
int get_Item_Type_Value(string inputString)
{
	string arType[] = { 
		[...]
		"ITEM_CHEQUE",					//35

/* «÷› */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
		"ITEM_PET",						//36
#endif



/* ≈»ÕÀ ⁄‰ */
int get_Item_SubType_Value(unsigned int type_value, string inputString)
{
	[...]
	static string arSub29[] = { "DS_SLOT1", "DS_SLOT2", "DS_SLOT3", "DS_SLOT4", "DS_SLOT5", "DS_SLOT6" };

/* √÷› */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
	static string arSub35[] = {"PET_PAY"};
#endif

/* «»ÕÀ ⁄‰ */
	static string* arSubType[] = {
		[...]
		0,			//40

#ifdef ENABLE_EXTENDED_PET_SYSTEM
		arSub35,
#endif

/* «»ÕÀ ⁄‰ */
	static int arNumberOfSubtype[_countof(arSubType)] = {
		[...]
		0, // 40
/* √÷› */
#ifdef ENABLE_EXTENDED_PET_SYSTEM
		sizeof(arSub35)/sizeof(arSub35[0]),
#endif
