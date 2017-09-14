 /*will attempt to include a repeated operation loop to allow users to continue operating.
	as of now, user can only perform one operation before program closes*/

#include<stdio.h>

int main()
{
	char op;
	int mult1, mult2, add1, add2, sub1, sub2, m, a, s;
	float div1, div2, d;

	printf("Enter an operation with or without the numbers you wish to calculate.\nBe sure to include spaces between each number!: ");
	scanf_s("%c", &op, 1); //get input operation
		switch (op) { 
			case'x':
				printf("You have chosen multiplication\n What two numbers would you like to multiply? ");
				scanf_s("%d", &mult1); //get input numbers
				scanf_s("%d", &mult2);
				m = mult1 * mult2;
				printf("%d*%d=%d\n", mult1, mult2, m);
				break;
			case '+':
				printf("You have chosen addition\nWhat two numbers would you like to add? ");
				scanf_s("%d", &add1);
				scanf_s("%d", &add2);
				a = add1 + add2;
				printf("%d+%d=%d\n", add1, add2, a);
				break;
			case '-':
				printf("You have chosen subtraction\nWhat two numbers would you like to subtract? ");
				scanf_s("%d", &sub1);
				scanf_s("%d", &sub2);
				s = sub1 - sub2;
				printf("%d-%d=%d\n", sub1, sub2, s);
				break;
			case '/':
				printf("You have chosen division\nWhat two numbers would you like to divide? ");
				scanf_s("%f", &div1);
				scanf_s("%f", &div2);
				d = div1 / div2;
				printf("%f/%f=%f\n", div1, div2, d);
				break;
			default:
				printf("that isn't an operation, sadly :(\n");
		}
	system("pause"); //used to keep windows console from closing immediately after operation
	return 0;
}
