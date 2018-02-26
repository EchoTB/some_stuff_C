#include <stdlib.h>
#include <stdio.h>

int main(){

    int input1, a, b, answer;

    printf("Select a number!\n"); printf("To Collect Write 1\n"); printf("To Substract Write 2\n"); printf("To Multiply Write 3\n"); printf("To Divide Write 4\n");
    scanf("%d", &input1);

    switch(input1){

    case 1:
        printf("Please write the first number = "); scanf("%f", &a);
        printf("Please write the second number = "); scanf("%f", &b);
        answer=a+b;
        printf("The answer is = %f\n", answer);



    }

    return 0;
}
