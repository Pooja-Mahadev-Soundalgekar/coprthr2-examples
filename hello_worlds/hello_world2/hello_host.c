
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <coprthr.h>

int main( int argc, char* argv[] )
{
	int dd = coprthr_dopen(COPRTHR_DEVICE_E32,COPRTHR_O_STREAM);

	coprthr_dexecv(dd,"hello_device.e32",argv,0);

	coprthr_dwait(dd);

	coprthr_dclose(dd);
}

