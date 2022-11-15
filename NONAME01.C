#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[10],i,j,temp,n;
	 printf("Enter For Array Value");
	 scanf("%d",&n);
	for(i=1;i<n;i++){
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
	    if(a[j]<a[i]){
	      temp=a[i];
	      a[j]=a[i];
	      temp=a[j];
	      }
	      } }

	   printf(i=0;i<n;i++)
	   printf("%d",a[j];
	   return 0;
	   getch();
	   }