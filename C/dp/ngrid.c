#include<stdio.h>
arr[1001][1001];
int find_paths(int x, int y)
{
	if(x==0 || y==0)
	{
		arr[x][y] = 1;
		return 1;
	}
	if(arr[x][y] >= 1)
	{
		return arr[x][y];
	}
	arr[x][y] = find_paths(x, y-1) + find_paths(x-1, y);
	return arr[x][y];
}

int main()
{
	int n;
	printf("Enter the value of n for an n*n grid:");
	scanf("%d", &n);
	printf("The no of paths for %d*%d grid is %d.\n", n, n, find_paths(n, n));
	return 0;
}

