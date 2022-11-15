#include<stdio.h>
#include<conio.h>

void main()
{
  int row,i,j;
clrscr();
 printf("Enter your value");
 scanf("%d",&row);
 for(i=1;i<row;i++){
   for(j=1;j<(row-1);j++){
    printf("*");
    }
    printf("\n");
   }

getch();
}