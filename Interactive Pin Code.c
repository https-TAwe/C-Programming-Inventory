/*This is a C-Code that request a user's input for a pin, and checks if it is correct with the actual pin and only allows for certain tries before it terminates. 
Makes use of loops and if and else if statements*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int code;
    for (i=5; i>=0; i--) //loops it for i = 5,4,3,2,1,and 0.
    {
        printf("Please insert your code: "); //when i is any of the values above, the code prints the following and asks for user input.
        scanf("%d",&code);
        if (code!=4576 && i>=1) //if the code is not correct and i is greater than or equal to 1 the code prints the following:
        {
        printf("Pin is incorrect.\n");
        printf("Try again. You have %d tries left\n",i); //this tells the user how many tries the user has. 
        } 
       else if (code==4576) //however, if the code if correct, it would print the following: 
        {
            printf("Your pin is correct!");
            i = -1; //the loop is ended because i is a value that doesn't follow the condition.
        }
         if (i==0){ //if i is equal to 0 (the last stage of the loop), the code says the following
        printf("You have exhausted your tries. Try again later.");}


    }
}

//This code does the same thing, however, it makes use of 'while' statements rather than 'if' 
int i = 5; //initial value is 5
int code;
while (i>=1) //for i value(s) greater than or equal to 1 it does the following: 
    {
    printf("Please insert your pin: ");
    scanf("%d",&code);
    if(code!=4576){ //if the code is not 4576 it prints the following. 
            if (i >=2) { 
               printf("The pin is incorrect. Please try again\n"); //Gives the user a certain number of tries to attempt the pin (5 tries)
                i--;
            }
            else { //prints the following, when i is equals to 1 
                printf("You've ran out of tries!!!!");
                i = -1; //sets a new value of i and terminates the loop. 
            }
    }
    else{ 

        printf("Your Pin is correct. Your balance is...");
         i = -1; //for a correct pin it sets a new value of i and terminates the loop as well. 
    }

}

