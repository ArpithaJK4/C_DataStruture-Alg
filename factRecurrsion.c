#include <stdio.h>



int fact(int a){


if(a==0||a==1){
return 1;


}else{


return a*fact(a-1);
}



}



int main() {
  int a=5;
 int b= fact(a);
 
printf("factorial of the given number is   %d :\n",b);
}
