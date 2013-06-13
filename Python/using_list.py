# This is my shopping list.
shoplist = ['maggi', 'chips', 'juice', 'namkeen']

print('I have', len(shoplist), 'items to purchase.')

print('My shopping list is', end=' ')
for item in shoplist:
    print(item, end=' ')
    
print('\nI also have to buy rice.')
shoplist.append('rice')
print('Now my list is', shoplist)

shoplist.sort()
print('My sorted list is', shoplist)

print('The first item i will buy is', shoplist[0])
olditem = shoplist[0]

del shoplist[0]
print('I bought the', olditem)
print('My shopping list is now', shoplist)
