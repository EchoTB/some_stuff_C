#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[11] = "Can Gursoy";
    printf("My name is %s. \n", name);

    name[2] = 'm';
    printf("My name is %s. \n", name);

    char food[] = "meat";
    printf("The best food is %s. \n", food);

    strcpy(food, "soup");//Changes a string to a new one
    printf("The best food is %s. \n", food);

    return 0;
}
