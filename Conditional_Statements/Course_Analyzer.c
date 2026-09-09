#include<stdio.h>

int main (void)
{
	int math, english, urdu, computer, pst, total_score, pass, fail, average;
	
	
	printf("\tCourse Analyzer!\n");
	printf("*********************************\n");
	
	printf("\n\nEnter your Maths Marks: ");
	scanf("%d",& math);
	printf("Enter your English Marks: ");
	scanf("%d",& english);
	printf("Enter your Urdu Marks: ");
	scanf("%d",& urdu);
	printf("Enter your Computer Marks: ");
	scanf("%d",& computer);
	printf("Enter your Pak.Studies Marks: ");
	scanf("%d",& pst);
	
	
	pass = 0;
	fail = 0;
	
	if (math >= 50)
	{
	printf ("\nMath: PASS\n");
	pass+=1;
	}
	else
	{
	printf ("\nMath: FAIL\n");
	fail+=1;
	}
	
	if (english >= 50)
	{
	printf ("English: PASS\n");
	pass+=1;
	}
	else
	{
	printf ("Englis: FAIL\n");
	fail+=1;
	}
	
	if (urdu >= 50)
	{
	printf ("Urdu: PASS\n");
	pass+=1;
	}
	else
	{
	printf ("Urdu: FAIL\n");
	fail+=1;
	}
	
	if (computer >= 50)
	{
	printf ("Computer: PASS\n");
	pass+=1;
	}
	else
	{
	printf ("Computer: FAIL\n");
	fail+=1;
	}
	
	if (pst >= 50)
	{
	printf ("Pak.Studies: PASS\n");
	pass+=1;
	}
	else
	{
	printf ("Pak.Studies: FAIL\n");
	fail+=1;
	}

	average = math+english+computer+urdu+pst;
	printf("Your average score is: %d\n", average);
	
	printf ("\nThe total number of subjects you've passed are %d\n", pass);
	
	printf ("\nThe total number of subjects you've failed are %d\n", fail);
	
}
