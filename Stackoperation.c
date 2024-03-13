#include<stdio.h>
#include<stdlib.h>

#define SIZE 5



void push( int*, int);
int pop(int*);

void display(int*);
int top=-1;
void main(){
int stack[SIZE];
int choice,item;
while(1){
printf("\n\nStack operation:");
printf("\n 1 push");
printf("\n 2 pop");
printf("\n 3 Display");

printf("\n 4 Exit\n");

printf("Enter your choice:\n");
scanf("%d",&choice);


switch(choice){


case 1: printf("Enter the Element to be pushed\n");
        scanf("%d",&item);
        push(stack,item);
        break;
        
 case 2: item =pop(stack);
         if(item)
         printf("the popped item is %d",item);
         break;
 case 3: display(stack);
           break;
       default: exit(0);
       
       



}

}
}


void push(int*stack,int item){

if(top==SIZE-1){


printf(" Stack overflow\n");


}else{

top=top+1;
stack[top]=item;


printf("Element inserted succesfully\n");
}



}


int pop(int *stack){
int item;
 if(top==-1){
 
 printf("Stack underflow\n");
 return 0;
 
 }
 
 
 
 item=stack[top--];
 return item;



}
void display(int *stack){
int i;

if(top==-1){


printf("Stack is Empty\n");
return;
}
for(i=top;i>=0;i--){


printf("%d\n", stack[i]);


}
}
