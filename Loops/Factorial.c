#include<stdio.h>

int main(void)
{
	int f,n, a;
	
	printf("Enter a number: ");
	scanf("%d", & n);
	
	a=1;
	
	for (f=n;f>=1; f--)
	{
		a=f*a;
	}
	printf("The factorial of the given number is: %d",a);
}

