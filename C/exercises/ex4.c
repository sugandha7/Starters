#include <stdio.h>
/*This program is wrong on purpose for you to learn valgrind.*/
int main()
{
	int age = 10;
	int height;

	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);

	return 0;
}
