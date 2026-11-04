#include <stdio.h>
#include <stdlib.h>


int main()
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
