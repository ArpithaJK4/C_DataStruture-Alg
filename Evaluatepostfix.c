#include<stdio.h>
#include<string.h>
#include<math.h>

#define SIZE 30


void push(int);
int pop();

int op(int ,int ,char);

int stack[SIZE];
int top=-1;
int isdig(char);


int main(){


char symbol ,postfix[30];

int a,b,res,i;
printf("Enter a postfix  Expression\n");


scanf("%s", postfix);
for(i=0;i<strlen(postfix); i++)
{
symbol=postfix[i];
if(isdig(symbol))
push(symbol-'0');
else{
a=pop();
b=pop();
res=op(b,a,symbol);
push(res);
}}
printf("the result of the Expression is =");
printf("%d\n",pop());
return 0;
}
int pop()
{
if(top==-1){
printf("stack underflow\n");
return 0;
}
else
return stack[top--];
}
void push(int item){
if(top==SIZE-1)
printf("\n Stack Overflow\n");
else{
top=top+1;
stack[top]=item;
}}
int op(int op1,int op2,char symbol){
switch(symbol)
{
case '+' :return op1+op2;
case '-' :return op1-op2;
case'*' :return op1*op2;
case '/' :return op1/op2;
}}
int isdig(char symbol){
return (symbol>='0'&&symbol<='9');
}
