#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    clrscr();
    printf("enter value n:-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     for(j=n;j>=i;j--)
     {
      printf(" ");
      }
     for(k=1;k<=i;k++)
     {
       printf("*");
     }
      printf("\n");
    }
    for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
      printf("");
     }
     for(k=n-1;k>=i;k--)
     {
      printf("*");
     }
     printf("\n");
    }
    getch();



}