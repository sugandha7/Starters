def printmax(a,b):
	''' Prints the max of two numbers.
	
	 The numbers must be integers.'''
	x=int(a) #Convert the no. to intetger if it is not.
	y=int(b)
	if x>y:
		return x
	else:
		return y
print('The max of two numbers is',printmax(3,5))
print(printmax.__doc__)
