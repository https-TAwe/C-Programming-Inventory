
#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Hello world!\n");
    int password;
printf("Please enter your password: "); //prompt user
scanf("%d",&password);
if (password == 217){
printf("Access granted\n"); // response if true
}
else{
printf("Access denied\n"); // response if false
}


//making a code that takes 2 user inputs, A and B, and outputs different cases.
int A;
int B;
printf("Please enter your value of A: ");
scanf("%d",&A);
printf("\nPlease enter your value for B: ");
scanf("%d",&B);

if (A==B) {
    printf("A is equal to B\n");
}
else if (A<B) {
    printf("A is smaller than B\n");
}
else {
    printf("A is larger than B\n");
}

//creating a code that asks for 2 inputs and an operator
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



//task 3:
{

int weight;
int deliveryCost;
printf("\nEnter payload weight: ");
scanf("%d",&weight);
    if(weight <=200 & weight > 100){
    deliveryCost = weight + 500;
}
    else if(weight <=100 & weight >50 ){
    deliveryCost = weight + 200;
}
    else if(weight <=50 & weight>=10){
    deliveryCost = weight + 100;
}
    else if (weight < 10){
    deliveryCost = weight + 50;
}
    else{
    deliveryCost = weight * 2 + 500;
}
printf("Delivery cost is: $%d",deliveryCost);
}

//task 4: editing code in task 3:

 {
int weight;
int deliveryCost;
printf("Enter payload weight: ");
scanf("%d",&weight);
if(weight <=200){
        if(weight > 100){
    deliveryCost = weight + 500; //if its larger than 100 but less than 200
    }
        else if (weight >50 ){
        deliveryCost = weight + 200;
    }
        else if(weight>=10){
    deliveryCost = weight + 100;
    }}

else if (weight < 10){
    deliveryCost = weight + 50;
    }
else{
deliveryCost = weight * 2 + 500;
}
printf("Delivery cost is: $%d",deliveryCost);

}

 //task 5:
 {
     printf("What is your age: ");
     int a;
    scanf("%d",&a);
     if (a < 13)  {
        printf("\nYou are a: Child");
     }
    else if (a > 13 && a < 17) {
        printf("\nYou are a: Teenager");
     }
    else if (a > 16 && a < 64) {
        printf("\nYou are an: Adult");
     }
    else
     {
         printf("\nYou are a: Senior\n");
     }
 }

 //task 6: Improving task 5:
 {
printf("What is your age: ");
int a;
scanf("%d",&a);
     if (a < 13)  {
        printf("\nYou are a: Child\n");
     }
    else if (a >= 13 && a <= 17) {
        printf("\nYou are a: Teenager\n");
     }
    else if (a == 18 && a < 64) {
        printf("\nYou are an: Adult\n");
     }
    else
     {
         printf("\nYou are a: Senior\n");
     }
printf("Do you have a student id? Press 1 for yes and 0.");
int id;
scanf("%d", &id);

    if (id == 1 || a < 18) {
    printf("You meet the requirement for a discount.");
 }
    else if (id==0) {
    printf("You do not meet the requirements for a discount.");
 }
 else {
    printf("You have chosen an operator that does not exist");
 }

 }

 { int p;
 printf("Please insert your pin: ");
 scanf("%d",&p);
       if (p == 4576) {
        printf("Check Balance = press 1\n");
        printf("Deposit = press 2\n");
        printf("Withdraw = press 3\n");
        printf("\nPlease insert your operator: ");
int operation;
scanf("%d",&operation);
switch (operation){
case 1:
    printf("Checking Balance...\n");
    int b;
    b = 1000;
    printf("Your balance is: %d\n",b);
break;
case 2:
    printf("Please state the amount you want to deposit: ");
    int r;
    r = 1000;
    int d;
    scanf("%d",&d);
        if (d > 0) {
            int newbal;
            newbal = r + d;
            printf("Your new balance is: %d\n",newbal);
        }
    else {
        printf("Invalid number");
    }
break;
case 3:
    printf("\nPlease state the amount you want to withdraw: ");
    int z;
    z = 1000;
    int w;
    scanf("%d", &w);
        if (z >= w) {
            int newbalance;
            newbalance = z - w;
            printf("\nYou have withdrawn %d from your account\n",w);
            printf("\nYour new balance is: %d\n", newbalance);
        }
       else
       {
           printf("\nThat is more than your balance. Would you like to request for an Overdraft?\n");
       }
break;
default:
    printf("You have chosen an operator that does not exist.");
}

       }
    else {
        printf("PIN is incorrect.");
       }

 return 0;
 }
}


