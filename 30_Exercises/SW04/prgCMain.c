#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {
	mainMenu = 1,
	numstat = 2,
	cubic = 3,
	factorial = 4,
	nchoosek = 5,
	printBinary = 6,
	exitPGM = 99
}menuPoint;

// function declaration:
	menuPoint PrintMainMenu( void );
	float calculateCubic( float );
	float calculateFactorial( float );
	void convertToBinary( int );
	float binomialCoefficient ( float, float );
		
int main( int argc, char* argv [] )
{
	// variable definition
	int run = 1;
	float input1 = 0;
	float input2 = 0;
	float output = 0;	
		
	menuPoint menuSelected;
	menuSelected = mainMenu;

	while (run)
	{
		switch(menuSelected)
		{
			case mainMenu:
				menuSelected = PrintMainMenu();
				break;
				
			case numstat:
				printf("\nYou have opened the PGM numstat\n");
				printf("Enter two numbers\n");
				printf("--> ");
				scanf("%f %f", &input1, &input2);
				if (input1 < input2)
				{
					printf("Numbers in ascending order: %f %f\n", 
							input1, input2 );
				}
				else
				{					
				printf("Numbers in ascending order: %f %f\n", 
						input2, input1 );
				}
				printf("Sum: %f\n", input1 + input2);
				printf("Absolute Difference: %f\n", fabs(input1 - input2));
				printf("Product: %f\n", input1 * input2);
				printf("Ratio (number 2 / number 1): %f\n", input2 / input1);
				menuSelected = PrintMainMenu();
				break;
				
			case cubic:
				printf("\nYou have opened the PGM cubic\n");
				printf("Enter a number to calculate the cubic\n");
				printf("--> ");
				scanf("%f", &input1);
				output = calculateCubic( input1 );
				printf("The cubic of %f is %f\n", input1, output);
				menuSelected = PrintMainMenu();
				break;
				
			case factorial:
				printf("\nYou have opened the PGM factorial\n");
				printf("Enter a number to calculate the factorial\n");
				printf("--> ");
				scanf("%f", &input1);
				output = calculateFactorial( input1 );
				printf("The Factorial of %f is %f\n", input1, output);
				menuSelected = PrintMainMenu();
				break;
				
				case nchoosek:
				printf("\nYou have opened the PGM nchoosek\n");
				printf("Enter two numbers ( n and k ) to calculate the binomial coefficient\n");
				printf("--> ");
				scanf("%f %f", &input1, &input2);
				output = binomialCoefficient( input1, input2 );
				printf("The binomial coefficient from n=%f and k=%f is %f\n", input1, input2, output);
				menuSelected = PrintMainMenu();
				break;
				
				case printBinary:
				printf("\nYou have opened the PGM print Binary\n");
				printf("Enter a number to convert it to binary\n");
				printf("--> ");
				scanf("%f", &input1);			
				convertToBinary( (int)input1 );	// float in int erzwingen
				menuSelected = PrintMainMenu();			
				break;
				
			case exitPGM:
				run = 0;
				break;
				
			default:
				printf("\nwrong entered value\n");
				printf("Enter '1' to open the menu\n");
				printf("Enter '99' to exit\n");
				printf("--> ");
				scanf("%d", (int*)&menuSelected);
				break;
				
		} //switch
} //while
printf("\nSee you later alligator :) \n");	
return 0;
} //main

// function implementations:

// menu
menuPoint PrintMainMenu( void )
{
	menuPoint selection = mainMenu;
	printf("\n------------------------------------\n");
	printf("		MENU\n");
	printf("------------------------------------\n");
	printf("Enter one of the following number:\n");
	printf("%d  - Menu\n", mainMenu);
	printf("%d  - numstat\n", numstat);
	printf("%d  - cubic\n", cubic);
	printf("%d  - factorial\n", factorial);
	printf("%d  - nchoosek\n", nchoosek);
	printf("%d  - print Binary\n", printBinary);
	printf("%d - exit\n", exitPGM);
	printf("--> ");
	scanf("%d", (int*)&selection);
return selection;
}
// cubic
float calculateCubic( float x)
{
	float xCubed;
	xCubed = x * x * x;
return xCubed;
}
// factorial
float calculateFactorial( float fact)
{
	float xFactorial;
	if ( fact >= 1 )
	{
		xFactorial = fact * calculateFactorial(fact-1);
	}
	else 
	{
		xFactorial = 1;
	}
return xFactorial;
}
// print Binary
void convertToBinary( int dec)
{
	int power = 1;
	int rest = 0;
	int binary = 0;
	int decOld = dec;
	while ( dec > 0)
	{
		rest = dec % 2;
		dec = dec / 2;
		binary = binary + (rest * power);
		power = power * 10;
	}
	printf("The binary of %d is %d\n",decOld, binary);
}
// nchoosek
float binomialCoefficient( float n, float k)
{
	float nFact = calculateFactorial( n );
	float kFact = calculateFactorial( k );
	float nMinKFact = calculateFactorial( n - k);
	float binomial = 0;
	binomial = 	nFact / (kFact * nMinKFact);
return binomial;	
}





