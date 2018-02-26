/*

\a = ses
\f
\r

*/
#include<stdio.h>
//#include<conio.h>
//#include<locale.h>
int main(){
	//setlocale(LC_ALL, "TURKISH");
	top1:
	char name[20];
	char surname[20];
	printf("Welcome there!\n");
	printf("Please write your name!\n");
	scanf("%s", name);
	printf("Please write your surname!\n");
	scanf("%s", surname);
		printf("Hello %s %s !\n", name, surname);

	int age;
	printf("Please write your age!\n");
	scanf("%i", &age);

	if (age >= 15){
		printf("You can be with us on this course!\n");
	}else{
		printf("You can't be with us on this course, sorry :(\n");
		goto top1;
	}

	top2:
	int input;
	float answer, a, b;
	printf("Select a number!\n"); printf("To Collect Write 1\n"); printf("To Substract Write 2\n"); printf("To Multiply Write 3\n"); printf("To Divide Write 4\n");
	scanf("%d", &input);
	switch(input){
		case 1:
			printf("Please write the first number = "); scanf("%f", &a);
			printf("Please write the second number = "); scanf("%f", &b);
            answer=a+b;
			printf("The answer is = %f\n", answer);
			break;
		case 2:
			printf("Please write the first number = "); scanf("%f", &a);
			printf("Please write the second number = "); scanf("%f", &b);
			answer=a-b;
			printf("The answer is = %f\n", answer);
			break;
		case 3:
			printf("Please write the first number = "); scanf("%f", &a);
			printf("Please write the second number = "); scanf("%f", &b);
			answer=a*b;
			printf("The answer is = %f\n", answer);
			break;
		case 4:
			printf("Please write the first number = "); scanf("%f", &a);
			printf("Please write the second number = "); scanf("%f", &b);
			answer=a/b;
			printf("The answer is = %f\n", answer);
			break;
		default:
			printf("An error has acquired.\n\a");
			break;

	}
	goto top2;
	//}

	return 0;
}

