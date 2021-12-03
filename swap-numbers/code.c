/*
Swap two numbers using a temp variable.
*/
#include<stdio.h>

int main()
{   
	int number1,number2;
	scanf("%d %d",&number1,&number2);
	int temporary=number1;
	number1=number2;
	number2=temporary;
	printf("THe swapped numbers are %d  %d\n",number1,number2);
	return 0;
}

