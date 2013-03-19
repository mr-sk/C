#include <stdio.h>
#include <stdlib.h>
#include <mach-o/getsect.h>

int I;

int main(int argc, char *argv[])
{

	int i;
	int *ii;

	printf("Page size: %d\n", getpagesize());
    printf("    program text (etext)      %10p\n", (void*)get_etext());
    printf("    uninitialized data (end)  %10p\n", (void*)get_end());

	printf("\n");
	ii = (int *) malloc(sizeof(int));

	printf("main   = 0x%lx\n", (unsigned long int) main);
	printf("&I     = 0x%lx\n", (unsigned long int) &I);
	printf("&i     = 0x%lx\n", (unsigned long int) &i);
	printf("&argc  = 0x%lx\n", (unsigned long int) &argc);
	printf("&ii    = 0x%lx\n", (unsigned long int) &ii);
	printf("ii     = 0x%lx\n", (unsigned long int) ii);


    printf("    initialized data (edata)  %10p\n", (void*)get_edata());

}
