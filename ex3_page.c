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
    printf("    program text (etext)      %10p\n", (void*)get_etext());
    printf("    uninitialized data (end)  %10p\n", (void*)get_end());
    printf("    initialized data (edata)  %10p\n", (void*)get_edata());

	printf("Enter a memory location in hex: 0x: ");
	fflush(stdout);

	scanf("0x%lx", &s);

	printf("\nReading %10p   ", s);
	printf("\n&s =           0x%lx\n", (unsigned long int) *s);
	fflush(stdout);

	c = *s;
	
	printf("\nc: %d\n", c);
	printf("\nWriting %d back to %10p          ", c, s);
	fflush(stdout);

	*s = c;
	
	printf("ok\n");

}
