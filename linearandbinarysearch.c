#include<stdio.h>
#include<stdlib.h>
void main(){


int array[10],search_key,i,j,n,low,high,location,choice;

void linear_search(int search_key,int array[10],int n);
void binary_search(int search_key,int array[10],int n);
printf("Enter the size of Array:");
scanf("%d",&n);
printf("Enter the Elemnts of the the Arrays\n");

for(i=1;i<n;i++){

scanf("%d",&array[i]);
}
printf("Enter the  search key Elements:");
scanf("%d",&search_key);

printf("\n");
printf("1. LINEAR SEARCH\n");
printf("2. Binary Search\n");
printf("\n");
printf("Enter Your choice:");
scanf("%d",&choice);

switch(choice){

case 1: linear_search(search_key,array,n);
break;
case 2: binary_search(search_key,array,n);
break;
default:
exit(0);
}
}

void linear_search(int search_key,int array[10], int n){


int i,location;
for(i=0;i<n;i++){

if(search_key==array[i]){
location=i;
printf("\n");
printf("the location of search key Elements=%d  is %d\n", search_key,location);
printf("\n");
}
}

}

void  binary_search(int search_key,int array[100],int n){

 int mid ,i,low,high;
 low=1;
 high=n;
 mid =(low+high)/2;
 i=0;
while(search_key!=array[mid]){

if(search_key<=array[mid]){
low=1;
high=mid+1;
mid=(low+high)/2;

}else{

low =mid+1;
high=n;
mid=(low+high)/2;
}
}
printf("\n");
printf("Search_Key Element=%d F at\t ", search_key);
printf("location=%d",mid);
printf("/n");
}
