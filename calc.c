#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
	if (argc != 4) {
		printf("\nwrong number of arguments\n");
	}
	else {
		float first, second;
		char op;
		//sscanf_s reads the values inputted and puts them into the allocated memory as a float. 
		//the _s is a safety measure in order to avoid buffer overflow.

		sscanf_s(argv[2], "%f", &first);
		sscanf_s(argv[1], "%c", &op);
		sscanf_s(argv[3], "%f", &second);

		switch (op) {//take input operator
		case'x':
			printf("%f \n", first * second); //print output result
			break;
		case '+':
				printf("%f \n", first + second); //print output result
				break;
		case '-':
				printf("%f \n", first - second); //print output result
				break;
		case '/':
				if (second == 0) {
					printf("cannot divide by zero!\n");
				}
				else
				printf("%f \n", first / second); //print output result
				break;
		default:
				printf("that isn't an operation, sadly :(\n");
				
		}
		system("pause"); //used to keep windows console from closing immediately after operation
		return 0;
	}
}
