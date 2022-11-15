#include<stdio.h>
#include<conio.h>
 void main()
 {
      int i,j,count=0;
      clrscr();
      for(i=1;i<=5;i++){
	 if(i%2 !=0){
	   for(j=1;j<=3;j++){
	    count=count+1;
	    printf("%d",count);
	    }
      }else{
	  int temp=count+1;
	  for(j=count+3;j>=temp;j--){
	      count= count+1;
	      printf("%d",j);
	   }
      }
      printf("\n");
   }
     getch();
 }