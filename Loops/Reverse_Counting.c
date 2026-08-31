#include<stdio.h>

int main (void)
{
	int n, a;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	a=n;
	
	while (a>=1)
	{
		printf("%d ",a);
		a--;
	}
}

