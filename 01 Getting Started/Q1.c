/* Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of his basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/

#include <stdio.h>

int main(){
	float salary;
	
	printf("Enter Ramesh's salary:\n");
	// Using scanf_s instead of scanf as scanf has been deprecated
	scanf_s("%f",&salary);

	// According to the question, gross pay = 40% of basic salary + 20% of basic salary + basic salary
	printf("His gross salary is %f",(8 * salary)/5);
	
	return 0;
}
