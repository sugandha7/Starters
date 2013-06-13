# 'ab' is short for 'a'ddress'b'ook
ab = { 'Swaroop' : 'swaroop@swaroopch.com',
       'Larry' : 'larry@wall.org',
       'Matsumoto' : 'matz@ruby-lang.org',
       'Spammer' : 'spammer@hotmail.com'
  }

print("Swaroop's address is", ab['Swaroop'])
print('There are {0} contacts in the address book'.format(len(ab)))

for name, address in ab.items():
    print('Contact {0} at {1}'.format(name, address))

# Adding a key-value pair
ab['Guido'] = 'guido@python.org'

if 'Guido' in ab:
    print("Guido's address is", ab['Guido'])
