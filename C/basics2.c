//This is a test program to revise few basic topics from the YouTube videos of Derek Banas. This is also for me to learn some Git basics.
//Single line comment
/*Multi 
 	line
		comment*/
#include<stdio.h>	//This header file has printf, scanf and others. This takes the code defined in the header file and sticks it here
#include<strings.h>	//Has string related functions

#define MYNAME "Bharath"	//Defines a constant and usually constants are defined in all caps
int age=26;			//Defining a global variable. This variable is accessable by all the functions in this program
main()				//All programs must have this function. Execution starts here
{
	char FirstLetter = 'B';	//Char type variable can store one character and it is specified within single quotes
				//Variable names can have letters, numbers and underscore but the first character should be a letter
				//If we put a number in char type variable, we can't use it in calculations [cuz the ASCII value is stored maybe?]
	char Initial, FirstName[15], LastName[15];
	char MyName[20]="Bharath";	//Creates a character array; also called a string. Always have room for string terminator '\0'
	int age=25;		//Integers can hold positive and negative numbers but not decimal values
				//Here the "local variable" value is given more preference to the value of global variable
				//Stores numbers from approx -32768 and 32768
	long int BigNum=32769;	//Can store bigger integers than int. Don't put commas in between numbers
	float Pi=3.14;		//Can have floating point values
	double BigPi=3.14159;	//Stores floating point with more precision
	printf("\n");		//Used to print a string of characters within double quotes
				//Here \n is an escape sequence ad is read as a single character
				// \n = to go to the next line;	\t = to give a tab space
				// \\ = to print a backslash;	\" = prints quotes
	printf("I am %d years old\n",age);	//%d is access specifier to a decimal point integer value
	printf("BigNum=%ld\n",BigNum);		//%ld for long
	printf("%3.4f and %2.5f\n",Pi,BigPi);	//%f for both float & double. %2.5f prints "atleast 2 places before" & "atmost 5 places after" decimal
	printf("%c",FirstLetter);		//%c is for character
	printf("\nMy name is %s\n", "Bharath");	//One way of printing a string
	printf("My name again is %s\n", MyName);//Another way
	strcpy(MyName, "New Name");		//We cannot directly say string1 = string2!!
	printf("Enter your Initials\n");	//For the prompt
	scanf("%c",&Initial);			//Scanf is used to grab input. Everything similar except '&'
						// & = address of
	printf("What is your name?\n");
	scanf("%s %s",FirstName,LastName);	//Observe that there is NO & SIGN HERE!
						// Math operators
						// +,-,*,/,%... % gives the remainder
	//Order of operations:
	//Parenthesis
	//Not symbol
	//Increment/Decrement
	//Multiplication, Division, Modulus
	//Addition, Subtraction
	//Relational Operators
						//There are shortcuts like +=, -= and so on
	//OBSERVE this part:
	int randomNum = 1;
	printf(" %d + 1 = %d is wrong",randomNum ,randomNum+=1);	//This result prints 2 + 1 = 2 
								//which isn't right because randomNum+=1 is calculated BEFORE it is sent to printf
								//VarName++ or VarName-- increments or decrements respectively
								//VarName++ executes after sending the current value to function 
								//++VarName executes before sending value to the function
	//Type casting Example
	int a = 12, b=14;
	printf("%f",(float) a/b);				//Converts the value to float temporarily	

}
