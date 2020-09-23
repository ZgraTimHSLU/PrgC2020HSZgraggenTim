#include <stdio.h>

int main(void)
{
	int testValue = 2;
	int limitValue = 3;
	
	if(testValue >= limitValue){
		printf("%d is bigger or equal to %d\n", testValue, limitValue);
	}
	else{
		printf("%d is less tahn %d\n", testValue, limitValue);
	}
	
	return 0;
}

