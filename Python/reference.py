shoplist = ['apple', 'mango', 'litchi', 'grapes']

mylist = shoplist # mylist is just another name pointing to the same object!
del shoplist[0]

print('Shoplist is', shoplist)
print('Mylist is', mylist)
# notice that both shoplist and mylist both print the same list without
# the 'apple' confirming that they point to the same object

mylist = shoplist[:]  # Make a copy by doing a full slice.
del mylist[0]

print('Shoplist is', shoplist)
print('Mylist is', mylist)
# notice that now the two lists are different
