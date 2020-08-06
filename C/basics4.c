//Tower of Hanoi. My attempt
#include<stdio.h>
//#include<conio.h>
void hanoi(int num,int from,int to)
{	
	int i, temp;
	if(num==1)
	{
		printf("Move disk %d from %d to %d\n", num, from, to);
		return;
	}
	else if(from==to)
		return;
	else
	{
		for(i=1; i<=3; i++)
			if((i!=from)&&(i!=to))
				temp=i;
		hanoi(num-1, from, temp);
		printf("Move disk %d from %d to %d\n", num, from, to);
		hanoi(num-1, temp, to);
		return;
	}
}
void main()
{
	int num;
	printf("Enter number of rings\n");
	scanf("%d", &num);
	hanoi(num, 1, 3);

}
