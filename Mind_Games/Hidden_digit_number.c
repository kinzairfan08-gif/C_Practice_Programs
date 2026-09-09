#include<stdio.h>

int main()
{
	int digit_1, digit_2, digit_3, result , num;
  	char play;
  
  do
    {
      
		printf("\t\tMind Game\n");
		printf("************************************");
	  	printf("\t\nLets play a game! :)\n");
	    printf("\nAssume any 4 digit number.\nNow reverse it and substract greater number from smaller number.");
	
    	printf("\n\nEnter only 3 digits of your answer keeping one digit hidden :)\n");
	
    	printf("\nEnter a digit: ");
    	scanf("%d",&digit_1);
    	printf("Enter another digit: ");
    	scanf("%d",&digit_2);
    	printf("Enter the 3rd digit: ");
	    scanf("%d",&digit_3);
	
	    num = digit_1+digit_2+digit_3;
		
	    if(num%9==0)
    	{
    		result=0;
    	}
    	else if(num<9)
	    {
	    	result=9-num;
	    }
	    else if (num<18)
    	{
    		result = 18-num;
    	}
    	else if (num<27)
    	{
	    	result = 27-num;
    	}
	
	    printf("\nThe hidden number is: %d",result);
	    
	    printf("\nDo you want to play the game again?Y/N \n");
	    scanf(" %c",&play);
    }

  while (play=='Y' || play=='y');
	
}
