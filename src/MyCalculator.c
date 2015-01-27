/*
 * MyCalculator.c
 *
 *  Created on: 20.01.2015
 *      Author: busley
 */


#include "calculation.h"

int getInputValue(char* text)
{
	int value=0;
	printf(text);
	fflush(stdout);
	scanf("%d", &value);
	return value;
}

int main(void)
{
	int X=1;
	char Calc_oprn;
	int value_a, value_b;
	// Function call
	calculator_operations();

	while(X)
	{
		printf("\n");
		printf("%s ", KEY);
		fflush(stdout);

		scanf("%c",&Calc_oprn);

		if(Calc_oprn == '\n')
		{
			scanf("%c",&Calc_oprn);
		}

		switch(Calc_oprn)
		{

			case '+':
			case '-':
			case '*':
			case '/':
			case '?':
				value_a = getInputValue("\nPlease enter first number   : ");
				value_b = getInputValue("Please enter second number  : ");

				switch(Calc_oprn)
				{
					case '+': 	addition(value_a, value_b);
								break;
					case '-':	subtraction(value_a, value_b);
								break;
					case '*':	multiplication(value_a, value_b);
								break;
					case '/':	division(value_a, value_b);
								break;
					case '?':	modulus(value_a, value_b);
								break;
				}
				break;


			case 'H':
			case 'h': calculator_operations();
					  break;

			case 'Q':
			case 'q': exit(0);
					  break;
			case 'c':
			case 'C': system("cls");
					  calculator_operations();
					  break;

			default : system("cls");

			printf("\n**********You have entered unavailable option");
			printf("***********\n");
			printf("\n*****Please Enter any one of below available ");
			printf("options****\n");
			calculator_operations();
		}

	}
	return EXIT_SUCCESS;
}
