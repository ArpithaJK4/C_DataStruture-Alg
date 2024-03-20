#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Q[SIZE],choice,ele;
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
int main(){

printf("\n Queue operation Using Arrays");
 printf("\n----------------------\n");
 printf("\n 1. Insert at rear\n 2.Delete a Front\n 3.Display \n 4.Exit ");
 while(1){
 printf("\n Enter your choice:\n");
 scanf("%d",&choice);
 switch(choice){
 case 1: enqueue();
         break;


         case 2: dequeue();
                 break;
                 case 3: display();
                              break;
                              case 4: exit(0);
                              default: printf("\n please Enter a valid choice(1/2/3/4)");


 }


 }
}

void enqueue(){
if(rear==SIZE-1){
printf("\n  Queue is overflow \n");
return;
}else{
if(front==-1){
front=0;


printf("Enter the Element to be inserted into Queue:");
scanf("%d", &ele);

rear++;

Q[rear]=ele;
printf("\n inserted -> %d", ele);
}
}
}
void dequeue(){
if(front==-1){
printf("\n Queue is underflow ***");


}
else{
printf("\n Deleted item is :%d \n ", Q[front]);
front++;
if(front>rear){

front=rear=-1;

}

}
}
void display(){
int i;
 if(rear==-1){
 printf("\n **   Queue is Empty.....\n");


 }
printf("Queue element are :\n ");

for(i=front;i<=rear;i++){
printf("\n%d",Q[i]);
}}

