#include<stdio.h>

int main()
{
	int total_hour, distance_0, i, previous_hour;
	float total;
	
	printf("\tSpeed Calculator!");
	printf("\n*******************************");
	
	printf("\n\nEnter total hours travelled: ");
	scanf("%d",&total_hour);
	
	if (total_hour<1)
	{
		printf("\n\nInvalid input.\nPlease Try Again!");
		printf("\nEnter total hours travelled: ");
		scanf("%d",&total_hour);
	}
	
	if (total_hour>5)
	{
		printf("\n\nInvalid input.\nPlease Try Again!");
		printf("\nEnter total hours travelled: ");
		scanf("%d",&total_hour);
	}
	
	printf("\n");
	total = 0;
	previous_hour = 0;
	
	for (i=1;i<=total_hour;i++)
	{
		distance_0 = 0;
		printf("\nEnter the distance covered per hour in miles: ");
		scanf("%d",&distance_0);
		
			if(distance_0 < 1)
			{
				printf("\n\nSorry! Invalid Input.\nPlease try again.");
				printf("\nEnter the distance covered per hour: ");
				scanf("%d",&distance_0);
		    }
			if(previous_hour==distance_0)
			{
				printf("\n\nSorry! hour cant be same!\nTry Again :)\n");
				printf("Enter the distance cover per hour: ");
				scanf("%d",&distance_0);
			}
		total+=distance_0;
		previous_hour=distance_0;
		
	}
	
	total=total/total_hour;
	
	printf("\n\nThe total distance travelled on an average is %.2f miles per hour", total);
	
	return 0;
}
