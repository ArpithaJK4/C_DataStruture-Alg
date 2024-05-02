#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next
};
struct node*head;
void biginsert();
void begin_delete();
void last_delete();
void random_delete();
void display();

void main(){
int choice =0;
while(choice!=-9){

printf(" \n\n ********Main Menu***********");
printf("\n Choice the option from the following list\n");
printf("\n -------------------------------------------\n");
printf("\n1.Insert in begining\n 2.delete from begining\n 3. Delete from last\n 4.Delete node after specified location\n 5.Display\n 6.Exit\n");
printf("Enter your choice\n");
scanf("\n%d",&choice);
switch(choice){
case 1:
 beginsert();
 break;
 case 2: begin_delete();
 break;
 case 3: last_delete();
      break;
      case 4: random_delete();
      break;
      case 5: display();
          break;
          case 6: exit(0);
          break;
          default: printf("invalid choice\n");



}
}

}

void beginsert(){
struct node*ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node *));
if(ptr==NULL){


printf("\n OVERFLOW");
}else{
 printf("\n Enter the value\Elements");

 scanf("%d", &item);
 ptr->data=item;
 ptr->next=head;
 head=ptr;
 printf("\n Node Created \n Inserted Element id :%d",item);

}
}

void begin_delete(){
struct node*ptr;

if(head==NULL){
printf("\n Last is empty");

}
else{
ptr=head;
head=ptr->next;
free(ptr);
printf("\n Node deleted from the begining\n");


}

}


void last_delete(){

struct node*ptr,*ptr1;
if(head==NULL){
printf("\n list is Empty");


}
else if(head-> next==NULL){
head=NULL;
free(head);
printf("\nOnly node of the last is deleted\n");

}
else{

ptr=head;
while(ptr->next!=NULL){

ptr1=ptr;
ptr=ptr->next;

}
ptr1->next=NULL;
free(ptr);
printf("\n Deleted node from the last\n");

}
}

void random_delete(){
struct node*ptr,*ptr1;
int loc,i;
printf("\n Enter the location of the node  after which you want to perform deletion\n");
scanf("%d", &loc);
ptr=head;
for(i=0;i<loc;i++){
ptr1=ptr;
if(ptr==NULL)
{
printf("\n Can't delete");
return;

}}
ptr1->next=ptr->next;
free(ptr);
printf("\n Deleted node%d ",loc+1);

}
void display(){
struct node*ptr;
ptr=head;
if(ptr==NULL){
printf("nothing to print");

}
else{
printf("\n printing values\n");
while(ptr!=NULL){
printf("\n %d",ptr->data);
ptr=ptr->next;

}
}
}
