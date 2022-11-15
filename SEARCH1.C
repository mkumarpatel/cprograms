#include<stdio.h>
#include<conio.h>

void main()
{          int a[5],i,s,temp=0;
	   clrscr();
	    printf("Array Elements");
	     for(i=0;i<5;i++){
	     scanf("%d",&a[i]);
	     }
	    printf("Search For Array Elements");
	     scanf("%d",&s);
	     for(i=0;i<5;i++){
		if(a[i]==s){
		  printf("data found");
		  temp=1;
		  break;
		}
	    }
              if(temp==0){ 
		  printf("data not found");
		}

	   getch();
}