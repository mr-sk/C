#include <stdio.h>
#include <stdlib.h>
#include <mach-o/getsect.h>

int main(int argc, char *argv[])
{
	
	char *s;
	char c;

	int i;

	printf("main   = 0x%lx\n", (unsigned long int) main);
	printf("&i     = 0x%lx\n", (unsigned long int) &i);
	printf("Enter a memory location in hex: 0x: ");
	fflush(stdout);

	scanf("0x%lx", &s);
	while (1) {
		c = *s;
	
		printf("\nc: %d\n", c);
		printf("\n0x%lx", &s);

		;// += sizeof(int);
	}

}
