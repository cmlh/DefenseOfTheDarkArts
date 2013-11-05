#include <stdio.h>

int main (int argc, const char * argv[])
{
	int i = 0;	

	printf("The value of i is %d\n", i);
	printf("The value of the argument count, argc, is %d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("Argument %d => %s\n", i, argv[i]);
	}
}
