#include<stdio.h>

int main (void)
{
	int num1, num2, sum_num1,sum_num2,div;
	
	
	printf("\tAmicable Digits!");
	printf("\n********************************\n\n");
	printf("Let's find amicable digits :)");
	printf("\n\nEnter the 1st number: ");
	scanf("%d",&num1);
	printf("\nEnter the 2nd number: ");
	scanf("%d",&num2);
	
	sum_num1=0;
	sum_num2=0;
	
	printf("\n The factors of %d are: [", num1);
	
	for(div=1; div<num1/2; div++) //instead of checking from 1 to given number we gave it a shotter range of numbers that is from 1 to num1 /2.
	{
		if (num1%div==0)
		{
			printf("%d, ", div);
			sum_num1+=div;
		}
	}
	
	printf("]");
	
	printf("\n The factors of %d are: [", num2);
	
	for (div=1;div<num2/2;div++)
	{
		if (num2%div==0)
		{
			printf("%d, ",div);
			sum_num2+=div;
		}
	}
	
	printf("]");
	
	if (sum_num1==num2&&sum_num2==num1)
	{
		printf("\n\nThe given Numbers are amicable!");
	}
	else
	{
		printf("\n\nThe given numbers are not amicable.");
	}

  return 0;
}
