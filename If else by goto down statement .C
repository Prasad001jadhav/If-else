#include<stdio.h>
#include<conio.h>
int main ()
{
	int no = 0;
	printf("\n enter a positive number to cheak wheather is even or odd  = ");
	scanf("%d",&no);
	
	if(no <= 0)
	{
		printf("\n %d is invalid input.",no);
		goto down;
	}
	 if(no % 2 == 0)
	{
		printf("\n your no %d is even.",no);
	}
	else
	{
		printf("\n your no %d is odd.",no);
	}
down:
	printf("\n\nThanks");
	
	getch ();
	return 0;
}