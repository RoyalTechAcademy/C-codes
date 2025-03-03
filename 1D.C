#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	int i;
	clrscr();
	printf("Enter 5 elements :") ;
	for(i=0 ; i< 5 ; i++)
	{

		scanf("%d" , &a[i]) ;
	}

	printf("printing array elements :\n");
	for(i=0 ; i< 5 ; i++)
	{

		printf("%d \n " , a[i]) ;
	}


	getch();

}