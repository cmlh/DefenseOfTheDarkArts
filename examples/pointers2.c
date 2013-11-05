#include <stdio.h>

int main()
{
	int num = 13;
	int *num_ptr;
	num_ptr = &num;
	
	printf("num = %d\n", num);
	printf("num_ptr = 0x%08x\n", num_ptr);
	printf("&num_ptr = 0x%08x\n", &num_ptr);
	printf("*num_ptr = 0x%08x\n", *num_ptr);
	printf("num is located at 0x%08x and contains %d\n", &num, num);
	printf("num_ptr is located at 0x%08x, contains 0x%08x, and points to %d\n", &num_ptr, num_ptr, *num_ptr);
}
