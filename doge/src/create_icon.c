#include <stdio.h>
#include "icon.h"

int main()
{
	FILE *f = fopen("obj/doge.ico", "wb");
	fwrite(dogeIcon, 1, sizeof(dogeIcon), f);
	fclose(f);
	
	return 0;
}