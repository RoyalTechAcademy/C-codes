#include<stdio.h>
#include<conio.h>

void main()
{

	int a[2][3] , i , j;
	clrscr();

	printf("ENter 6 elements :");
	for(i=0 ; i<=1 ; i++)  //row
	{
		for(j =0 ; j<=2 ; j++) //col
		{
			scanf("%d" , &a[i][j]);
		}
	}
	printf("Printing array : \n");
	for(i=0 ; i<=1 ; i++)  //row
	{
		for(j =0 ; j<=2 ; j++) //col
		{
			printf("%d \t" , a[i][j]);
		}
		printf("\n");
	}
		getch();

}