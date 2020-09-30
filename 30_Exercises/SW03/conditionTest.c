#include <stdio.h>

int main( int argc, char* argv [] )
{
	int x = 0 , y = 0;
	
	// wenn 'y' wahr   --> x=1
	// wenn 'y' falsch --> x=100
	// y>0 --> wahr
	
	printf("before: x %d, y %d\n", x, y);
	
	// case 1: y = 0
	x = y ? 1 : 100;
	printf("y = 0: x %d, y %d\n", x, y);
	
	// case 2: y = 200
	y = 200;
	x = y ? 1 : 100;
	printf("y = 200: x %d, y %d\n", x, y);
	
	// case 3: y = -1
	y = -1;
	x = y ? 1 : 100;
	printf("y = -1: x %d, y %d\n", x, y);
	




return 0;
}
