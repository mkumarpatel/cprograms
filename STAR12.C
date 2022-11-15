#include<stdio.h>
#include<conio.h>
 void main()
 {
     int j,i,n;
     clrscr();
     printf("enter user :-");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
      for(j=n;j>=i;j--)
      {
       printf("%d",j);
     }
     printf("\n");
    }
    getch();




 }