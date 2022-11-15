#include<stdio.h>
#include<conio.h>
void main()
{
       int arr[20],pos,i,element,n;
       clrscr();
       printf("enter your user value  ");
       scanf("%d",&n);
       for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
       }
       printf("Enter your array elements \n");
       for(i=0;i<n;i++){
	("%d",arr[i]);
	}
       printf("enter your position for deletion");
       scanf("%d",&pos);
       for(i=pos-1;i<n;i++){
	arr[i]=arr[i+1];
	}
       printf("the array elements for deletion");
       for(i=0;i<n-1;n++){
	printf("\n%d",arr[i]);
	}
	getch();
	return 0;




    getch();

}