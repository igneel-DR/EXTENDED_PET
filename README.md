# EXTENDED_PET
# [-DevMt2-ar.com-](https://devmt2-ar.com)



https://user-images.githubusercontent.com/23616357/133128613-fb8659c1-1956-4aca-9f6a-b36f39532a45.mp4



Item_Proto.txt
```txt
53001	불사조소환권	ITEM_PET	PET_PAY	1	ANTI_DROP | ANTI_SELL | ANTI_GIVE | ANTI_PKDROP | ANTI_STACK | ANTI_MYSHOP	LOG	NONE	NONE	0	0	0	0	0	LEVEL	0	REAL_TIME	2592000	APPLY_NONE	0	APPLY_NONE	0	APPLY_NONE	0	34001	0	0	0	0	0	0	0	0
```

اذا كنت تريد اضافة لمعة الجرد للمرافق عند الاستدعاء

- root/uiinventory.py
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
- Dumproto/ItemCSVReader (قم بتطبيق نفس خطوات ProtoReader.cpp)
- UserInterface/PythonItemModul.cpp
-----------------------------------------
اذا اصابك الكسل قم بستبدال 

```python
  if item.ITEM_TYPE_PET == item.GetItemType():
```
ب 
```python
  if itemVnum >= 53001 and itemVnum <= 53256:
```

Thanks for Hammer - Astro
