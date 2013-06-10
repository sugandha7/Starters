x = 50

def func():
    global x  
    # When x is specified as global, the changes made in this function
    # are reflected outside as well.
    print('The value of x is', x)
    x = 2
    print('x changed to', x)

func()
print('Now x is', x)
