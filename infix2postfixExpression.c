#include<stdio.h>
#include<ctype.h>
 char stack[50];
   int top=-1;
   void push(char ele){
   
   
   stack[++top]=ele;
   }
   char pop()
   {
   
   
   if(top==-1)
   {
   return -1;
   }else{
   
   return stack[top--];
   }}
   
   int priority(char x)
   {
   
   if(x=='(')
   {
   return 0;
   
   }
   
   if(x=='+' ||x=='-')
   {
   return 1;
   }
   if(x=='*' || x=='/'){
   
   return 2;
   }return 0;
   }
   
   int main(){
   
   
   char exp[50];
   char *e ,ele;
   printf("Enter  the infix Expression :");
   scanf("%s" ,&exp);
   printf("\n");
   e=ele;
   
   while(*e!='\0')
   {
   
   if(isalnum(*e)){
   
   printf("%c", *e);
   
   }else if(*e=='(')
   {
   
   push(*e);
   }
   else if(* e==')'){
   
   while((ele=pop())!='('){
   printf("%c",ele);}}
   else{
   
   while(priority(stack[top])>=priority(*e))
    printf("%c",pop());
    push(*e);
    } e++;
    }
    while(top!=-1){
    printf("%c",pop());}
    return 0;
    }
