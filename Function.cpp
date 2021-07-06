#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int sum(int x,int y)
{
	return x+y;
}

int multiply (int x,int y)
{
	return x*y;
}

float qe(float a , float b , float c,float x)
{
	float first = a*(x*x);
	float mid = b*x;
	float last = c;
	return first+mid+last;
}

float maxfloat(int size)
{
	float maxarray[size];
	float maximum = 0;
	for (int count=0;count<=size;count++)
	{
		int random = rand()%100;
		maxarray[count] = random;
		printf("maxarray[%d] = %.2f\n",count,maxarray[count]);
		if(maxarray[count] > maximum)
		{
			maximum = maxarray[count];
		}
	}
	return maximum;
}

float calculator(char operato[10],float operand1,float operand2)
{
	if (strcmp(operato,"add") == 0)
	{
		return operand1+operand2;
	}
	else if(strcmp(operato,"sub") == 0)
	{
		return operand1-operand2;
	}
	else if(strcmp(operato,"mul") == 0)
	{
		return operand1*operand2;
	}
	else if(strcmp(operato,"div") == 0)
	{
		if (operand2==0)
		{
			return 404;
		}
		return operand1/operand2;
	}
	else
	{
		return 4043;
	}
}

