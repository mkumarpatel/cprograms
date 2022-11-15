#include<stdio.h>
#include<conio.h>

void main()
{
     int arr[10],i,n,s,mid,last,first=0,flag=0;
     clrscr();
     printf("enter  array size");
     scanf("%d",&n);
     printf("enter yor array element ascending order \n");
     for(i=0;i<n;i++)
     {
     scanf("\n %d",&arr[i]);
     }
     printf("array elements searching :-");
     scanf("%d",&s);
     last=n-1;
     while(first<=last)
     {
      mid=(first+last)/2;
      if(arr[mid]<s){
	first=mid+1;
     }else if(arr[mid]==s)
     {
      printf("%d found of array location",mid+1);
       break;
     }
   }
   if(first>last){
     printf("array not found");
   }
     getch();
     return 0;
}