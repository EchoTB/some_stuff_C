#include <stdio.h>
#include <stdlib.h>

int main(){

    int age;
    int currentYear;
    int birthYear;

    currentYear = 2017;
    birthYear = 2002;
    age = currentYear - birthYear;

    printf("Im %d years old.", age);

    return 0;
}
