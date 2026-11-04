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
        if (code!=4576 && i>=1) //if the code is not correct and i is greater than or equal to 1 the code prints the followingl.
        {
        printf("Pin is incorrect.\n");
        printf("Try again. You have %d tries left\n",i); }
       else if (code==4576) //however, if the code if correct, it would print the following.
        {
            printf("Your pin is correct!");
            i = -1; //the loop is ended because i is a value that doesn't follow the condition.
        }
         if (i==0){ //if i is equal to 0 (the last stage of the loop), the code says the following
        printf("You have exhausted your tries. Try again later.");}


    }
}




//code that requests a pin using while.
/*int i = 5;
int code;
while (i>=1) {
    printf("Please insert your pin: ");
    scanf("%d",&code);
    if(code!=4576){
            if (i >=2) {
               printf("The pin is incorrect. Please try again\n");
                i--;
            }
            else {
                printf("You've ran out of tries!!!!");
                i = -1;
            }
    }
    else{

        printf("Your Pin is correct. Your balance is...");
         i = -1;
    }

}*/

