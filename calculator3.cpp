#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	system("color f0");
top1:

	//int inputC, inputC2;
	int inputC;
	float a, b, c;
	float piNumber = 3.14, d, circle1, area1;//For (8)
	long int num; int i, co=0;
	
	printf("Please select a number!\n"); printf("To adding up (1).\n"); printf("To substract (2).\n"); printf("To multiply (3).\n"); printf("To divide (4).\n"); printf("To power each up (5).\n"); printf("To square root (6).\n"); printf("To find a triange hypotenuse (7).\n"); printf("To find circumference and area of a circle (8)(WIP).\n"); printf("To find a if a number is prime or not (9).\n");
	scanf("%d", &inputC);

	switch(inputC){
		case 1: printf("Write the first number = "); scanf("%f", &a); printf("\nWrite the second number = "); scanf("%f", &b); c = a + b; printf("The answer = %f\n\n", c); break; //  (WIP, Experimental, Need loops to use this)  printf("To keep going (1), else is top1.\n"); scanf("%d", &inputC2); if(inputC2 == 1){printf("Write the first number!\n"); scanf("%f", &a); c = c + a; printf("The answer = %f\n", c); }break;
		case 2: printf("Write the first number = "); scanf("%f", &a); printf("\nWrite the second number = "); scanf("%f", &b); c = a - b; printf("The answer = %f\n\n", c); break; //
		case 3: printf("Write the first number = "); scanf("%f", &a); printf("\nWrite the second number = "); scanf("%f", &b); c = a * b; printf("The answer = %f\n\n", c); break; // 
		case 4: printf("Write the first number = "); scanf("%f", &a); printf("\nWrite the second number = "); scanf("%f", &b); c = a / b; printf("The answer = %f\n\n", c); break; //
		case 5:	printf("Write the first number = "); scanf("%f", &a); printf("\nWrite the second number = "); scanf("%f", &b); c = pow(a, b); printf("The answer = %f\n\n", c); break;
		case 6: printf("Write the first number = "); scanf("%f", &a); printf("The answer = %f\n\n", sqrt(a)); break;
		case 7: printf("The first leg = "); scanf("%f", &a); printf("\nThe second leg = "); scanf("%f", &b); c = pow(a, 2) + pow(b, 2); printf("\nThe hypotenuse of triangle is = %f\n\n", sqrt(c)); break;
		case 8: printf("Write the diameter of the circle = "); scanf("%f", &d); circle1 = piNumber * d; area1 = piNumber * pow(d, 2); printf("\nThe area of circle is = %f, the circumference of circle is = %f\n\n", area1, circle1); break;
		case 9: printf("Write the number that you want to test = "); scanf("%ld", &num); for(i = 2; i <= num/2; i++){if (num % i == 0){ co++; break;}} if (co == 0 && num != 1){ printf("%ld is a prime number!\n", num);}else{ printf("%ld is not a prime number!\n", num);} break;
		default: printf("An error has acquired!\n\n"); break;
       // case 9: printf("Write the number that you want to test = "); scanf("%ld", &num); for(i = 2; i <= num/2; i++){if (num % i == 0){ co++; break;}} if (co == 0 && num != 1){ printf("%ld is a prime number!\n", num);}else{ printf("%ld is not a prime number!\n", num);} break;


	}

	goto top1;

}
