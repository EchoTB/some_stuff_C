#include <stdio.h>
#include <stdlib.h>

int main(){

    char firstname[20];
    char surname[20];
    int age;

    printf("Please write your name.\n");
    scanf("%s", firstname);
    printf("Please write your surname.\n");
    scanf("%s", surname);

    printf("Please write your age.\n");
    scanf("%d", &age);

        printf("Your name is %s %s and your age is %d.", firstname, surname, age);

    return 0;
}
