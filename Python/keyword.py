def func(a, b=5, c=10):  # b and c are default parameters
    print('a is', a, 'b is', b, 'c is', c)

func(1, 30)
func(c=24, a=1000)  # a and c are keyword arguments
func(23, c=7)   # c is a keyword argument
