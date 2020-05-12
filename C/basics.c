/*This is a practice program referring to the first 15 pages of The ANSI C Programming Language book*/
#include<stdio.h>
void main()
{
	float x[50],y[50];	//x= temperature in Farenheit, y = temperature in Celsius
	int i,n;		
	printf("This Program converts \"n\" number of temperature values from Farenheit to Celsius\n");
	printf("Enter the total number of values: ");
	scanf("%d",&n);
	if((n>50)||(n<0))
		printf("Please enter an integer between 1 and 50\n");
	else
	{
		printf("Enter %d number of values", n);
		for(i=0;i<n;i++)
		{
			scanf("%f",&x[i]);
			y[i]=(5.0/9.0)*(x[i]-32);	//Learnt that integer division ignores numbers after decimal ie; 5/9 results to 0
		}
		printf("Farenheit\tCelsius\n");
		for(i=0;i<n;i++)
			printf("%3.2f\t\t%3.2f\n",x[i],y[i]);	//Prints atleast 3 places before decimal and maximum 2 places after decimal
	}


}

