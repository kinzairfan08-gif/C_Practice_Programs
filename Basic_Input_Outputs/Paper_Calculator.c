#include<stdio.h>

int main (void)
{
	int people, report_pages, copies, number_pages, one_ream, number_of_ream;
	
	printf("Enter the number of people attending the meeting: ");
	scanf("%d",& people);
	printf("Enter the number of pages used in a single report: ");
	scanf("%d",& report_pages);
	
	
	//for exact number of copies as people
	copies=people+5;
	number_pages= copies*report_pages;
	
	//one_ream = 500;
	number_of_ream = (number_pages+499)/500; // we're working in surplus with 499 just 1 less than 500 that is one ream = 500 pages.
	
	printf("Thus, the total number of ream's needed are: %d", number_of_ream);
}
