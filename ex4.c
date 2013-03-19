#include <stdio.h>

main(int argc, char **argv)
{
	int i;

	printf("argc = %d.  &argc = 0x%x, &argv = 0x%x, &i = 0x%x\n",
		   argc, &argc, &argv, &i);

	if (argc > 0) main(argc-1, argv);
}
