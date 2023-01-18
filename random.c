lude <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxValUpperCase = 90;
int minValLowerCase = 65;

char randchar(){

	char randomNumber = (char) (rand() % (maxValUpperCase - minValLowerCase + 1) 
+ minValLowerCase);
	return randomNumber;

}

