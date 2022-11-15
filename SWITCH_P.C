
#include<stdio.h>
#include<conio.h>
void insert();
void update();
void delete();
void search();
void linear();
void binary();
void clear();
void exit();
void main()
{
      int check;
      clrscr();
      printf("enter a check number :-");
      scanf("%d",&check);
      switch(check){
	case 1:
	    insert();
	break;
	case 2:
	     update();
	break;
	case 3:
	     delete();
	break;
	case 4:
	     search();
	break;
	case 5:
	    linear();
	break;
	case 6:
	    binary();
	break;
	case 7:
	     clear();
	break;
	case 8:
	     exit();
	break;
	default:
		printf("null");

      }
      getch();
}
void insert(){
   int arr[10],num,i,j,element,pos;
    printf("enter array size :-");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
       scanf("\n %d",&arr[i]);
    }
    printf("enter new element and pos :-");
    scanf("%d %d",&element,&pos);
     num++;
    for(i=num;i<=pos;i--){
       arr[i]=arr[i-1];
    }
     arr[pos-1]=element;
    for(i=0;i<num;i++){
     printf("%d \n",arr[i]);
     }

}
 //update array
 void update(){
     int arr[10],num,i,j;
    printf("hello");

 }
 //delete array
 void delete(){
    int arr[10],n,i,pos;
    printf("enter size of array :-");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    printf("\n array elements \n");
    for(i=0;i<n;i++){
       printf("\n %d",arr[i]);
    }
    printf("\n 	enter position for deletion :-");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++){
       arr[i]=arr[i+1];
    }
    printf("\n array after deletion :- \n");
    for(i=0;i<n-1;i++){
      printf("%d",arr[i]);
    }
 }

 // search array
 void search(){
     int arr[10],i,n,s,flag=0;
     printf("enter arry  size :- \n");
     scanf("%d",&n);
     printf("enter array elements :- \n");
     for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
     }
     printf("enter searching element :-");
     scanf("%d",&s);
     for(i=0;i<n;i++){
	if(arr[i]==s){
	  printf("\n data found");
	  flag=1;
	  break;
	}
     }
     if(flag==0){
	printf("\n data not found");
     }
 }

 //linary array

 void linear(){
    int arr[10],i,s,n,item=0;
    printf("enter size of array:- ");
    scanf("%d",&n);
    printf("enter array element:-");
     for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
     }
    printf("enter the item for searching :-");
     scanf("%d",&s);
    for(i=0;i<n;i++){
       if(arr[i]==s){
	 item=1;
	 break;
       }
    }
    if(item==1){
       printf("the elemets is found is location %d",i+1);
    }else{
       printf("data not found");
    }

 }
 //binary search
 void binary(){
     int arr[10],i,s,n,f=0,l,mid,flag=0;
     printf("enter array size :-");
     scanf("%d",&n);
     printf("enter element in ascending order");
     for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
     }
     printf("enter element to be search :-");
     scanf("%d",&s);
     l=n-1;
     while(f<=1){
	mid=(f+1)/2;
	if(s==arr[mid]){
	  flag=1;
	  break;
	}else if(s>arr[mid]){
	    f=mid+1;
	 }else{
	   l=mid-1;
	 }
      }
       if(flag==1){
	 printf("element is found at location",mid+1);
       }else{
	  printf("data not found");
       }
}

void clear(){
  clrscr();
  }
void exit(){
    exit(0);
}