#include <stdio.h>
#include <stdlib.h>

int main(){


    char answer;

    printf("Do you like ice tea ? (y/n)\n");
    scanf(" %c", &answer);

    if( (answer == 'y') || (answer == 'n') ){// "||" is logic 'or'. "&&" is logic 'and'.
         printf("You haven't messed up!\n");

    }else{
        printf("You messed up!\n");

    }



    return 0;
}
