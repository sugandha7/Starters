"""Consider the XY coordinate plane with Xindices from 0 to R1 and Yindices from 0 to C1.
Each integer point (x,y) in the plane is given a color COLOR[x][y]. Color can be either red, green or blue.
You wish to draw a triangle within this plane with endpoints as integers. Also, at least one side of the triangle 
must be either a horizontal line, or a vertical line. There may be several triangles possible. Return the one with 
the largest area. Basically, return the area of this triangle. All the vertices of the triangle should be of diff color"""



from decimal import *
r = input("Enter the value of r")
c = input("Enter the value of c")
print("Enter 1:Red 2:Green 3:Blue")
color = []
max_area = 0
for i in range(0, r+1):
	color.append([])
	for j in range(0, c+1):
		print i,j
		val = input()
		color[i].append(val)


print color
def find_third_row(i, c1, c2):
	if(2*(c-i) >= c):
		for y in range(c, i, -1):
			if(y <= 2*i):
				for x in range(0, r+1):
				    if(color[x][2*i-y] != c1 and color[x][2*i-y] != c2):
					    return(2*i-y)

			for x in range(0, r+1):
				if(color[x][y] != c1 and color[x][y] != c2):
					return(y)

	if(2*(c-i) < c):
		for y in range(0, i):
			if(y >= 2*i-c):
				for x in range(0, r+1):
				    if(color[x][2*i-y] != c1 and color[x][2*i-y] != c2):
					    return(2*i-y)

			for x in range(0, r+1):
				if(color[x][y] != c1 and color[x][y] != c2):
					return(y)

def find_third_column(i, c1, c2):
	if(2*(r-i) >= r):
		for x in range(r, i, -1):
			if(x <= 2*i):
				for y in range(0, c+1):
				    if(color[2*i-x][y] != c1 and color[2*i-x][y] != c2):
					    return(2*i-x)

			for y in range(0, c+1):
				if(color[x][y] != c1 and color[x][y] != c2):
					return(x)

	if(2*(r-i) < r):
		for x in range(0, i):
			if(x >= 2*i-r):
				for y in range(0, c+1):
				    if(color[2*i-x][y] != c1 and color[2*i-x][y] != c2):
					    return(2*i-x)

			for y in range(0, c+1):
				if(color[x][y] != c1 and color[x][y] != c2):
					return(x)

def calc_max_area(r, c , color):
	max_area = 0
	for i in range (0, c+1):
		for j in range(0, r+1):
			for k in range(r, j, -1):
				if(color[j][i] != color[k][i]):
					y = find_third_row(i, color[j][i], color[k][i])
					#print "y",y,i,j,k
					if(y):
						area = abs(y-i)*abs(k-j)
						#print area
						if(area>max_area):
							max_area = area
							if(max_area == r*c):
								return(max_area)


	for i in range (0, r+1):
		for j in range(0, c+1):
			for k in range(c, j, -1):
				if(color[i][j] != color[i][k]):
					x = find_third_column(i,color[i][j], color[i][k])
					#print "x",x,i,j,k
					if(x):
						area = abs(x-i)*abs(k-j)
						#print area
						if(area>max_area):
							max_area = area
							if(max_area == r*c):
								return(max_area)
	return(max_area)

max_area = calc_max_area(r, c, color)
print "Max area is", Decimal(1)/Decimal(2)*Decimal(max_area)




