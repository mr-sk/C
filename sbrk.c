#include <stdio.h>
#include <stdlib.h>

main()
{
	char *s;
	char c;

	printf("program text (etext)      %10p\n", (void*)get_etext());
	printf("uninitialized data (end)  %10p\n", (void*)get_end());
	printf("sbrk(0)= 0x%lx\n", sbrk(0));
	printf("&c     = 0x%lx\n", &c);

	printf("\n");

	printf("Enter memory location in hex (start with 0x): ");
	fflush(stdout);

	if (scanf("0x%x", &s) != 1) {
		printf("Try again -- start your number with 0x\n");
		exit(1);
	}

	printf("Reading %lx:  ", s);
	fflush(stdout);
	c = *s;
	printf("%x\n", c);
	printf("Writing %x back to  0x%x:  ", c, s);
	fflush(stdout);
	*s = c;
	printf("ok\n");
}
