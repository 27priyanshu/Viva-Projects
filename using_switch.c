#include <stdio.h> 
int main () {
int num1, num2, choice;
printf("Enter Number 1: "); 
scanf("%d", &num1);
printf("Enter Number 2: ");
scanf("%d", &num2);
printf("\n=======================\n");
printf("1. Addition\n"); 
printf("2. Multiplication\n"); 
printf("3. Subtraction\n"); 
printf("4. Division\n");
printf("=======================\n");
printf("Choice: (1/2/3/4) ? : "); 
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("=======================\n");
printf("Addition Result: %d", num1+num2); 
printf("\n=======================\n");
break; 
case 2:
printf("=======================\n");
printf("Multiplication Result: %d", num1*num2); 
printf("\n=======================\n");
break; 
case 3:
printf("=======================\n");
printf("Subtraction Result: %d", num1-num2); 
printf("\n=======================\n");
break;
case 4:
printf("=======================\n");
printf("Division Result: %d", num1/num2); 
printf("\n=======================\n");
break; 
default:
break;
}
return 0;
}