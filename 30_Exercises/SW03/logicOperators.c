#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv [] )
{	
	int value1 = 0, value2 = 0, value3 = 0;
	// make sure, we have exactly 3 arguments
	
	if( argc != 4 )	// '4' weil 0 auch ein Argument(PGM) ist
	{
		// usage message
		printf("usage: logicOperators val1 val2 val3\n");
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);					
		printf("\nValue1 = %d, Value2 = %d, Value3 = %d\n", value1, value2, value3);
			
		int greatest = 0, smallest = 0; 
	
		if ( value1 <0 || value2 <0 || value3 < 0 )
		{
			printf("The entered values are not all positiv. Exiting. \n");
		}
		else
		{
			if(value3 > value1 && value3 > value2) 
			{
				greatest = value3;
				if (value1 < value2)
				{
					smallest = value1;
				}
				else
					smallest = value2;
			}
			else 
			{		
				if(value2 > value1 && value2 > value3) 
				{
					greatest = value2;
					if (value1 < value3)
					{
						smallest = value1;
					}
					else
						smallest = value3;
				}
				else
				{
					greatest = value1;
					if (value2 < value3)
					{
						smallest = value2;
					}
					else
					{
						smallest = value3;
					}
				}			
			}
			printf("largest Value %d smallest Value %d \n", greatest, smallest );
		}	
	}	
	
	return 0;
}
