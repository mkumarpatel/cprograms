#include<stdio.h>
#include<conio.h>
 void main()
 {
       int i,j,k,n;
       clrscr();
       printf("enter value :-");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
	 for (j=n;j>=i;j--){
	  printf(" ");
	 }
	for(k=1;k<(i*2);k++){
	   if(k>1 && k<(i*2)-1)
	   {
	    printf(" ");
	   }else{
	    printf("*");
	   }
	}
	  printf("\n");
       }
       for(i=n;i>=1;i--)
       {
	  for(j=n;j>i;j--){
	   printf(" ");
	  }
	 for(k=1;k<(i*2);k++)
	 {
	    if(k>1 && k<(i*2)-1)
	    {
	     printf(" ");
	    }else{
	     printf(" *");
	    }
	 }
	printf("\n");
    }
       getch();
 }