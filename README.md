# EXTENDED_PET
# [-DevMt2-ar.com-](https://devmt2-ar.com)

[![Watch the video](https://img.youtube.com/vi/T-D1KVIuvjA/maxresdefault.jpg)](https://i.gyazo.com/b26265a1a675f4f687e98c6af4bce395.mp4)

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

Thank for Hammer - Astro
