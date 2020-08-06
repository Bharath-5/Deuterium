//Trying two ways of finding the maxima of the function between 0 to Pi
#include<stdio.h>
#include<math.h>
void main()
{
	double max1=0.1, min1=0, maxLock, minLock, x, y=0, xLock=0, i, y2, xLock2;
	//To narrow the range down
	while(max1<=3.1)
	{
		x=(max1+min1)/2;
		if(x * cos(x)>y)
		{
			maxLock=max1;
			minLock=min1;
		}
		min1=max1;
		max1=max1+0.1;
	}
	//To find the actual point
	y=0;
	for(x=minLock; x<=maxLock; x+=0.001)
	{
		if(x * cos(x)>y)
			xLock=x;
	}
	printf("The calculated value with minimizing the number of calculations is at x=%f and equal to %f\n", xLock, xLock * cos(xLock));
	y2=0;
	for(x=0; x<=3.141; x+=0.001)
	{
		if(x * cos(x)>y2)
			xLock2=x;
	}
	printf("The calculated value without minimizing the number of calculations is at x=%f and equal to %f\n", xLock2, xLock2 * cos(xLock2));
	printf("Difference = %f\n", xLock-xLock2);
}

