#include <stdio.h>
#include <stdlib.h>

int main()
{ int pin; 
 printf("Please insert your pin: "); //asks for user input 
 scanf("%d",&pin); //assigns user input to a variable known as pin
       if (pin == 4576) { //if the pin is correct (4576) it would conduct the following: 
        printf("Check Balance = press 1\n");
        printf("Deposit = press 2\n");
        printf("Withdraw = press 3\n");
        printf("\nPlease insert your operator: ");
int operation; //introduces new variable known as operation
scanf("%d",&operation); //takes user input and assigns it to operation
switch (operation){ 
case 1: //if operation equals to 1 then it would print the following: 
    printf("Checking Balance...\n");
    int RandomBalance;
    RandomBalance = 1000;
    printf("Your balance is: %d\n",RandomBalance); //prints: "Your balance is 1000"
break;
case 2: //if opertion equal to 2 then it would print the following: 
    printf("Please state the amount you want to deposit: "); 
    int RandomBal;
    RandomBal = 1000; //initial balance 
    int Deposit;
    scanf("%d",&Deposit);
        if (Deposit > 0) {
            int newbal;
            newbal = Deposit + RandomBal; //new balance is user input (their deposit) + initial balance 
            printf("Your new balance is: %d\n",newbal); //prints the balance
        }
    else { //if deposit is less than 0, then it would print invalid number
        printf("Invalid number");
    }
break;
case 3: //if opertion equal to 3 then it would print the following
    printf("\nPlease state the amount you want to withdraw: ");
    int Balance;
    Balance = 1000;
    int InputWithdraw;
    scanf("%d", &InputWithdraw);
        if (Balance >= InputWithdraw) { //if the withdrawal indicated by the user is less than balance it would do the following
            int newbalance;
            newbalance = Balance - InputWithdraw;
            printf("\nYou have withdrawn %d from your account\n",InputWithdraw);
            printf("\nYour new balance is: %d\n", newbalance);
        }
       else //if the balance is less than the withdrawal it would offer an overdraft instead. 
       {
           printf("\nThat is more than your balance. Would you like to request for an Overdraft?\n");
       }
break;
default: //default meaning an operator value other than 1,2, or 3 which does not exist. 
    printf("You have chosen an operator that does not exist.");
}

       }
 else { //if the pin is not even correct, it would print the following: 
        printf("PIN is incorrect.");
       }
