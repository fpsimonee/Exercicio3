// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long int value1=200000,value2;
	long *lPtr=&value1;
	printf("%d\n",*lPtr);
	value2 = *lPtr;
	printf("%d\n", value2);
	printf("%p\n", value1);
	printf("%p\n", *lPtr);
	getchar();
	return 0;
}

