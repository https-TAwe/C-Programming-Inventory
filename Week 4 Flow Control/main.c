#include <studio.h>
#include <stdlib.h>
//creating a code that asks for 2 inputs and an operator
int main()
{
int input1;
int input2;
printf("Please choose input 1: ");
scanf("%d",&input1);

printf("\nPlease choose input 2: ");
scanf("%d", &input2);

printf("Press 1 for addition\n");
printf("Press 2 for subtraction\n");
printf("Press 3 for multiplication\n");
printf("What operator would you like?\n");

int operate;
scanf("%d",&operate);

switch(operate){
case 1:
     printf("You have chose addition. Your result is: %d + %d which equals: ",input1,input2);
    int c;
    c = input1 + input2;
    printf("%d",c);
break;
case 2:
     printf("You have chose subtraction. Your result is: %d - %d which equals: ",input1,input2);
    int d;
    d = input1 - input2;
    printf("%d",d);
break;
case 3:
     printf("You have chose subtraction. Your result is: %d x %d which equals: \n",input1,input2);
    int f;
    f = input1*input2;
    printf("%d",f);
break;
default:
    printf("\nYou have requested for an operator that does not exist");
}
}


