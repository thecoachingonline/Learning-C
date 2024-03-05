#include <stdio.h>

int main()
{
	int a[10],*ptra;

	ptra = a[0];
	printf("Address of a = %p\n",a);
	printf("Address of a = %p\n",&a[0]);
	printf("Pointer ptra = %p\n",ptra);

	return(0);
}