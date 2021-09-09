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
<?xml version="1.0" encoding="utf-8"?>
<svg version="1.1" 
     xmlns="http://www.w3.org/2000/svg"
     xmlns:xlink="http://www.w3.org/1999/xlink"
     width="100" height="50"
>
  <text font-size="16" x="10" y="20">
    <tspan fill="red">Hello</tspan>,
    <tspan fill="green">world</tspan>!
  </text>
</svg>
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
