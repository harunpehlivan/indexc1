
/* Calculation of simple interest */ 
/* Author gekay Date 25/05/2004 */ 
#include<stdio.h>

 main( ) 
{ 
 int num1,num2;
 char op;
printf("enter the operator : ");
scanf("%c",&op);
printf("Enter first number : ");
scanf("%d",&num1); 
printf("Enter second number : ");
scanf("%d",&num2);




switch(op){
  case '-':

  printf("%d-%d = %d ",num1,num2,num1-num2);
  break;

   case '+':

  printf("%d+%d = %d ",num1,num2,num1+num2);
  break;

   case '*':

  printf("%d*%d = %d ",num1,num2,num1*num2);
  break;

   case '/':

  printf("%d/%d = %d ",num1,num2,num1/num2);
  break;

   case '%':

  printf("%d / %d = Reminder = %d ",num1,num2,num1%num2);
  break;
  default:
  printf("Please Enter Valid Operator");
  


}

}
