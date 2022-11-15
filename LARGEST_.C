#include<stdio.h>
#include<conio.h>

void main()
{
	   int a[5],i,max,min,n;
	   clrscr();
	   printf("Enter Your User Value \n");
	   scanf("%d",&n);
	   printf("\n Enter Elements of Array \n");
	    for(i=0;i<n; i++){
	      scanf("%d",&a[i]);
	    }
	   printf("\n Elements of array\n");
	     for(i=0;i<n;i++)
	       printf("%d",&a[i]);
	       min=max=a[0];
	       for(i=0;i<n;i++){
		   if(a[i]>max)
		     max=a[i];

		   if(a[i]<min)
		      min=a[i];
	       }

		   printf("\n largest of array value %d",max);
		   printf("\n smallast of array value %d",min);



	   getch();
}