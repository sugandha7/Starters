#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	for(i=1;i<argc;i++)
	{
		printf("argument %d: %s\n", i, argv[i]);
	}

	char *states[] = {"Delhi", "Mumbai", "Bengaluru", "Kolkata"};
	int num_states = 4;
	for(i=0;i<num_states;i++)
	{
		printf("State %d: %s\n", i, states[i]);
	}
	return 0;
}
