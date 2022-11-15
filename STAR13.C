#include<stdio.h>
#include<conio.h>

void main()
{
       int i,j,n;
       clrscr();
       printf("enter value :- ");
       scanf("%d",n);
       for(i=1;i<=10;i++)
       {
	int no=i;
	for(j=1;j<=i;j++){
	 printf("%d",no);
	 no=no+101-j;
	}
	 printf(" \n");
      }
       getch();
}