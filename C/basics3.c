//This is from the second C video of Derek Banas. A few general topics have been skipped. 
//Use "gcc ProgramName.c -o ProgramName" to specify compiled file name than "a.out"
#include<stdio.h>
#include<math.h>
main()
{
	int num1=1,num2=2;
	printf("Is 1>2: %d", num1>num2);	//Over here, 0 will be printed. 
	if(num1<num2)
		printf("num1<num2");
	else if(num1=num2)
		printf("Num1=num2");
	else
		printf("Num1>num2");
					//If two of the if-else statements is right, only the first block where the condition is true 
					//will be executed due to sequential execution
					//We can use >, >=, =, <=, <
	//Logical operators can be used to combine multiple relational operators
	// && = Logical And	Ex: if((a>b)&&(b>c))
	// || = Logical Or	Ex	    ||
	// ! = Not		Ex: if(a!=b)


	//Observe this part
	int age=25;
	char* legalAge = (age>18)? "true" : "false";	//This is a conditional operator. The * makes it a pointer. true and false are strings
	printf("Is the customer of legal age?: %s\n", legalAge);	
	//To find maximum sizes of datatypes
	printf("A char takes %d bytes\n",sizeof(char));		
	printf("A int takes %d bytes\n",sizeof(int));	
	printf("A float takes %d bytes\n",sizeof(float));	
	printf("A long int takes %d bytes\n",sizeof(long int));	
	printf("A double takes %d bytes\n",sizeof(double));	

	//So, Derek has one way of finding the maximum number that can be made by the given number of digits. 
	//Here's my alternative implementation
	//Basically for n binary digits, the maximum value that can be formed is (2^n)-1;
	//0 digits - 0
	//1 digit - 1
	//2 digits - 3 and so on
	// pow() is defined in math.h. So, I'll include it.	
	printf("Enter the number of bits\n");
	scanf("%d",&num1);
	printf("\nMaximum value = %d\n",(int) (pow(2,num1)));
	//NOTE: While compiling thhis by gcc, use "gcc -lm basics3.c"
	//And not just "gcc basics.c" because it will cause a linker error
	for(int x=0; x<=10; x+=2)	//Derek uses c99 version of the for loop. This requires compilation to be done with "-std=c99" as argument
		printf("\t%d\t",x);	//Initialising a variable inside a for loop requires c99 or above. c99 defaults return type of main() as int
}
