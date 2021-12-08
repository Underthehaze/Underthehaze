//5.3 project 
// August 29, 2021
// Ismael Galarza 

#include <stdio.h> //header
#include <ctype.h>
#include <stdlib.h>



 void addition(int a, int b);		// all declartion function prototype
 void subtraction(int a, int b);
 void multiplication(int a, int b);
 void division(int a, int b);
 char getDifficultyLevel();
 int getNumberFromDifficultyLevel(char c);
 
 
 // global variables
 float totalProblems = 0;
 float totalCorrect = 0;
 float totalIncorrect = 0;

 
int main ()			//main function of the program
{

int choice = 0;		// declartion of a integer
int num1 = 0;
int num2 = 0;
char difficultyLevel;


while (choice != 5) // the while loop for the menu screen
 {
 	float percentage = 100.00 * (totalCorrect/totalIncorrect);
 
printf(" Math Practice Program Main Menu\n\n"); // all printing instructions 
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");
printf("Select an option ");
scanf("%d",&choice);
 

if (choice < 5 )
{
	difficultyLevel = getDifficultyLevel();
	num1 = getNumberFromDifficultyLevel(difficultyLevel);
	num2 = getNumberFromDifficultyLevel(difficultyLevel);
	
}

	if ( choice == 1)		// These IF/else statement determine what math practie you are choosing and all the function are being called
	{
	addition(num1, num2);
	 }
else if (choice == 2)
{
	subtraction(num1, num2 );
}
else if (choice == 3)
{
	multiplication(num1, num2);
}
else if (choice == 4)
{
	division(num1, num2);
}
else if (choice == 5)
{
	printf("\nYou attempted %.0f problems, %.0f correct, and %.0f incorrect\n ",totalProblems,totalCorrect,totalIncorrect);
	printf("For a percentage correct of %.2f percent,",percentage);
}
else
{
	printf("Please enter a vaild number.");
}

}

return;

}

void addition (int x, int y )			// function definition with declaritions and printing of the math equation 
{
	int answer = x + y;
	int userAnswer = 0; 
	
printf("%d + %d = ? ", x, y );
	scanf("%d",&userAnswer);
	
	totalProblems++;
	
	
		if ( answer == userAnswer )
	{  
	printf ("\nCorrect\n\n");
	totalCorrect++;
	} 
	else{
		printf("\nIncorrect\n\n");
		printf("The correct answer is %d \n\n",answer);
		}
		totalIncorrect++;
	return;
}

void subtraction(int x, int y)	// function definition with declaritions and printing of the math equation 

{

	int answer = x - y;
	int userAnswer = 0;
	

	printf("%d - %d = ? ",x, y);
	scanf("%d", &userAnswer);
	
	totalProblems++;
	
	if ( answer == userAnswer )
	{  
	printf ("\nCorrect\n\n");
	totalProblems++;
	} 
	else{
		printf("\nIncorrect\n\n");
		printf("The correct answer is %d \n\n",answer);
		}
		totalIncorrect++;
	
	return;
}

void multiplication(int x, int y) 	// function definition with declaritions and printing of the math equation 
{
	int answer = x * y;
	int userAnswer = 0;


	printf("%d * %d = ? ", x, y ); 
	scanf("%d",&userAnswer);
	
	totalProblems++;
	
		if ( answer == userAnswer )
	{  
	printf ("\nCorrect\n\n");
	totalCorrect++;
	} 
	else{
		printf("\nIncorrect\n\n");
		printf("The correct answer is %d \n\n",answer);
		}
		totalIncorrect++;
	return;
}

void division(int x, int y) 	// function definition with declaritions and printing of the math equation 
{
	int userAnswer = 0;
	int rAnswer = 0;
	int numerator = 0;
	int denominator = 0;
	
	if ( x >= y )
	{
		denominator = y;
		numerator = x; 
	}
	else
	{
		denominator = x;
		numerator = y; 
	}
	int answer = numerator / denominator;
	int remainder = numerator % denominator;
	
	
	printf("\n%d / %d = ? ", numerator, denominator);
	scanf("%d", &userAnswer);
	
	printf("Any Remainder: ? ");
	scanf("%d",&rAnswer);
	totalProblems++;
	
	if ( answer == userAnswer && rAnswer == remainder  )
	{  
	printf ("\nCorrect\n\n");
	totalCorrect++;
	} 
	else{
		printf("\nIncorrect\n\n");
		}
		totalIncorrect++;
		
		printf("The correct answer is %d and remainder %d\n\n",answer, remainder);
	return;
}
char getDifficultyLevel()
{
	 char difficultyLevel;
	
	printf("Select difficulty level e-easy m-medium h-hard ");
	scanf(" %c", &difficultyLevel);
	difficultyLevel = tolower(difficultyLevel);
	
	while(difficultyLevel != 'e' &&difficultyLevel != 'm' && difficultyLevel != 'h')
	{
		printf("Please enter a, m, or h ");
		scanf(" %c",&difficultyLevel );
		difficultyLevel = tolower(difficultyLevel);
	}
	return ;
}

int getNumberFromDifficultyLevel(char difficultyLevel )
{
	int number = 0;
	
	if (difficultyLevel == 'e' )
	{
		number = rand()%10+1;
	}
	else if (difficultyLevel == 'm' )
	{
		number = rand()%100+1;
	}
	else
	{
		number = rand()%1000+1;
	}
	return number;
}


