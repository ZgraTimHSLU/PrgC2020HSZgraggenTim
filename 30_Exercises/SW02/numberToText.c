#include <stdio.h>

int main( int argc, char* argv [] )
{
	int Input = 0;
		
	while (Input != 10)
	{
		printf("Enter a number between 0 and 9 to display the number as text. Enter 10 to stop the program: ");
		
		scanf("%d", &Input);
				
		switch (Input)
		{
			case 0:
				printf("zero\n");
				break;
			case 1:
				printf("one\n");
				break;
			case 2:
				printf("two\n");
				break;
			case 3:
				printf("three\n");
				break;
			case 4:
				printf("four\n");
				break;
			case 5:
				printf("five\n");
				break;
			case 6:
				printf("six\n");
				break;
			case 7:
				printf("seven\n");
				break;
			case 8:
				printf("eight\n");
				break;
			case 9:
				printf("nine\n");
				break;
			case 10:
				printf("Thank you. Good bye. \n");
				break;
			default:
				printf("invalid -> try again \n");
				break;
		
		} // switch
			
		printf("\n");
					
	} // while
		
return 0;
}
