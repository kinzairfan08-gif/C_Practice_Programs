#include<stdio.h>

int main(void)

{
	int n,a, sum;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	sum = 0;
	for (a=1;a<=n;a++)
	{
		sum+=a;
	}
	printf("The sum of the give number to 1 is: %d",sum);
}

