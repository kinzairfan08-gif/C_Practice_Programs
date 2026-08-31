#include<stdio.h>

int main(void)

{
	int n,a;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	a=1;
  
	while (a<=n)
	{
		printf("%d\t",a);
		a++;
	}
	
}

