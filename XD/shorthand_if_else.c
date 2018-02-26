#include <stdio.h>
#include <stdlib.h>

int main(){

    //(test) ? trueCode : falseCode;

  /*char lastName[20];
    printf("Enter your lastname: \n");
    scanf(" %s", lastName);

    (lastName[0] < 'I' ) ? printf("Blue Team") : printf("Red Team");*/

    int friends;
    printf("How many friends have you got ? \n");
    scanf(" %d", &friends);
    printf("You have %d friend%s.", friends, (friends != 1) ? "s" : "");


    return 0;
}
