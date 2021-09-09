# EXTENDED_PET
-DevMt2-ar.com -

اذا كنت تريد اضافة لمعة الجرد للمرافق عندا الاستدعاء

```python
if item.ITEM_TYPE_PET == item.GetItemType():
				metinSocket = [player.GetItemMetinSocket(slotNumber, j) for j in xrange(player.METIN_SOCKET_MAX_NUM)]# <!> globalSlotNumber may be different <!>
				isActivated = 0 != metinSocket[2]
				if isActivated:
					self.wndItem.ActivateSlotOld(i)
				else:
					self.wndItem.DeactivateSlotOld(i)
```

بنسبة ل @@ITEM_TYPE_PET

تستطيع اضافتها من 
- GameLib/itemData.h 
+ Dumproto/ItemCSVReader (قم بتطبيق نفس خطوات ProtoReader.cpp)
! UserInterface/PythonItemModul.cpp
-----------------------------------------
اذا اصابك الكسل قم بستبدال 

```python
  if item.ITEM_TYPE_PET == item.GetItemType():
```
ب 
```python
  if itemVnum >= 53001 and itemVnum <= 53256:
```

Thank for Hammer - Astro
