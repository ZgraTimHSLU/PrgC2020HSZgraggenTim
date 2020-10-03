#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( int argc, char* argv [] )
{	
	float value1 = 0, value2 = 0;
	// make sure, we have exactly 3 arguments
	
	if( argc != 3 )	// '3' weil 0 auch ein Argument(PGM) ist
	{
		// usage message
		printf("\nusage: logicOperators val1 val2\n");
	}
	else
	{
		value1 = atof(argv[1]);
		value2 = atof(argv[2]);				
					
		float greatest = 0, smallest = 0; 
		
			if( value2 > value1 ) 
			{
				greatest = value2;
				smallest = value1;
			}
			else 
			{
				greatest = value1;
				smallest = value2;
			}
		printf("\nInputs (in ascending order): %f %f\n", smallest, greatest );
		printf("Sum: %f\n", smallest + greatest);
		printf("Absolute Difference: %f\n", fabs(value1 - value2));
		printf("Product: %f\n", smallest * greatest);
		printf("Ratio (Input 2 / Input 1): %f\n\n", value2 / value1);
	}
	return 0;
}
