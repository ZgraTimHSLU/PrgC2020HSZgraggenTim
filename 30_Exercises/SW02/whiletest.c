#include <stdio.h>

int main( int argc, char* argv [] )
{
	int limitValue = 200;
	int maxLoopExecution = 100;
	int counter = 0;
	while( counter < limitValue )
	{
		counter++; // ist das Gleiche wie counter = counter + 1
		printf("# of while loop execution: %d\n", counter);
		if( counter > maxLoopExecution )
		{
			printf("max # executions exceeded! Aborting.\n");
			break;
		}
	}
return 0;
}
	// Achtung!!! counter-- l¨auft ins Unendliche
	// Abbrechen mit ESC
