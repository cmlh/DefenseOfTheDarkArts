#include <stdio.h>

int main()
{
	int i;
	int *j;
	
	i = 30;
	j = &i; // Copy address of i to pointer j
	*j = 23; // Dereference pointer j and set the containing value to 23 => changing the value of i
	printf("The value of i is %d\n", i);
	return 0;
}
