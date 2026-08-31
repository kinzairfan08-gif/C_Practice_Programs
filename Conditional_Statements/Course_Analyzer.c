#include<stdio.h>

int main (void)
{
	int math, english, urdu, computer, pst, total_score, pass, fail, average;
	printf("Enter your Maths Marks: ");
	scanf("%d",& math);
	printf("Enter your English Marks: ");
	scanf("%d",& english);
	printf("Enter your Urdu Marks: ");
	scanf("%d",& urdu);
	printf("Enter your Computer Marks: ");
	scanf("%d",& computer);
	printf("Enter your Pak.Studies Marks: ");
	scanf("%d",& pst);
	
	if (math >= 50)
	{
	printf ("Math: PASS\n");
	}
	else
	{
	printf ("Math: FAIL\n");
	}
	
	if (english >= 50)
	{
	printf ("English: PASS\n");
	}
	else
	{
	printf ("Englis: FAIL\n");
	}
	
	if (urdu >= 50)
	{
	printf ("Urdu: PASS\n");
	}
	else
	{
	printf ("Urdu: FAIL\n");
	}
	
	if (computer >= 50)
	{
	printf ("Computer: PASS\n");
	}
	else
	{
	printf ("Computer: FAIL\n");
	}
	
	if (pst >= 50)
	{
	printf ("Pak.Studies: PASS\n");
	}
	else
	{
	printf ("Pak.Studies: FAIL\n");
	}

	average = math+english+computer+urdu+pst;
	printf("Your average score is: %d\n", average);
	
	pass = 0;
	
	if (math>=50)
	{
		pass+=1;
	}
	if (english>=50)
	{
		pass+=1;
	}
	if (urdu>=50)
	{
		pass+=1;
	}
	if (computer>=50)
	{
		pass+=1;
	}
	if (pst>= 50)
	{
		pass+=1;
	}
	
	printf ("The total number of subjects you've passed are %d\n", pass);
	
	fail = 0;
	
	if (math<=50)
	{
		fail+=1;
	}
	if (english<=50)
	{
		fail+=1;
	}
	if (urdu<=50)
	{
		fail+=1; 
	}
	if (computer<=50)
	{
		fail+=1;
	}
	if (pst<=50)
	{
		fail+=1;
	}
	
	printf ("The total number of subjects you've failed are %d\n", fail);
	
	
}

