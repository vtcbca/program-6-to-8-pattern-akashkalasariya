#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=0; i<3; i++)
    {
	for(j=0; j<i; j++)
	{
	    printf(" ");
	}
	for(j=0; j<2*(3-i)-1; j++)
	{
	    printf("*");
	}
	printf("\n");
     }
     getch();
}
