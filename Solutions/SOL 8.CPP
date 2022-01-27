/*Write a program to print a pattern
date:26/01/2022
design by Akash Kalasariya*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k;
	clrscr();
	for(i=0;i<=3;i++)
	{
		for(k=3;k>=i;k--)
		{
			printf("  ");
		}
		for(j=i;j>1;j--)
		{
			printf(" %d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	getch();
}