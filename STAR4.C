#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    clrscr();
    printf("enter value :-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=n;j>=1;j--)
    {
     if(j>i)
     {
     printf(" ");
     }else{
      printf(" *");
     }
    }
      printf("\n");
    }
    for(i=1;i<=n;i++)
    {
     for(j=n;j<=1;j++)
       if(i>j){
	  printf(" ");
       }else{
	 printf(" *");
       }
       }
      printf("\n");
     }
    getch();
}
