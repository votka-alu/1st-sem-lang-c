#include <stdio.h>

int main()
{
	int *p;
	int n=10;
	printf("%d\n",&n);
	printf("%d\n",n);
	
	p=&n;
	printf("%d\n",p);
	printf("%d\n\n",*p);
	
	n=100;
	printf("%d\n",p);
	printf("%d\n",*p);
	
	*p=23;
	printf("%d\n",&n);
	printf("%d",n);
	
	
	
	return 0;
}

