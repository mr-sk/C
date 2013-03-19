#include <stdio.h>

int main(void)
{
	unsigned int val = 4294967295u;
    // 8 bytes, each byte can hold FF, or 1111 1111 (or 0..255)
	// FFFF FFFF = 8 bytes = 4294967295
    // Adding 1 causes the overflow.
	printf("val: %u\n", val);

	++val;

	printf("val: %u\n", val);
	return 0;
}
