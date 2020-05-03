/*This is a practice program referring to the first 15 pages of The ANSI C Programming Language book*/
#include<stdio.h>
void main()
{
	float x,y;	//x= temperature in Farenheit, y = temperature in Celsius
	printf("Farenheit\tCelsius\n");
	for(x=0; x<=300; x+=20)
	{
		y=(5.0/9.0)*(x-32);	//Learnt that integer division ignores numbers after decimal ie; 5/9 results to 0
		printf("%3.2f\t\t%3.2f\n",x,y);
	}
}

