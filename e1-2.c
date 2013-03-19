#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("sizeof(char): %lu\n", sizeof(char));
	printf("sizeof(signed char): %lu\n", sizeof(signed char));
	printf("sizeof(unsigned char): %lu\n", sizeof(unsigned char));
	printf("sizeof(short): %lu\n", sizeof(short));
	printf("sizeof(unsigned short): %lu\n", sizeof(unsigned short));
	printf("sizeof(int): %lu\n", sizeof(int));
	printf("sizeof(unsigned int): %lu\n", sizeof(unsigned int));
	printf("sizeof(long): %lu\n", sizeof(long));
	printf("sizeof(unsigned long): %lu\n", sizeof(unsigned long));
	printf("sizeof(float): %lu\n", sizeof(float));
	printf("sizeof(double): %lu\n", sizeof(double));
	printf("sizeof(long double): %lu\n", sizeof(long double));
	printf("sizeof(void *): %lu\n", sizeof(void *));
	printf("sizeof(int *): %lu\n", sizeof(int *));
	printf("sizeof(bool): %lu\n", sizeof(bool));
	return 0;
}
