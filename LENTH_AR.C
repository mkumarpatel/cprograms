#include<stdio.h>
#include<conio.h>

void main()
{
	  int a[10],i,n,s,temp=0;
	  clrscr();
	  printf("\n Enter Your Array Elements \n");
	  scanf("%d",&n);
	  for(i=1;i<10;i++){
	    scanf("%d",&a[i]);
	  }
	  printf("\n Array to Search alements");
	  scanf("%d",&s);
	  for(i=1;i<10;i++){
	    if(a[i]==s){
	    printf("data found");
	     temp=1;
	  }
	   }
	   if(temp==0){
	   printf("data not found");
	   }
	  printf("\n Element of array");
	  for(i=1;i<n;i++){
	  printf("%d ",&a[i]);
	    min=max=a[i];
	  }
	  getch();
}


