/*If the marks obtained by a student in five different subjects are input through the keyboard,
write a program to find out the aggregate marks and percentage obtained by the student. Assume that the maximum
marks that can be obtained by a student in each subject is 100.*/

#include <stdio.h>

int main(){
	int score_1, score_2, score_3, score_4, score_5;

	printf("Enter your scores in all five subjects:\n");
	scanf_s("%d %d %d %d %d", &score_1, &score_2, &score_3, &score_4, &score_5);

	int total = score_1 + score_2 + score_3 + score_4 + score_5;
	float percentage = (total / 500.0) * 100;

	printf("Total marks: %d\n", total);
	printf("Percentage: %.2f\n", percentage);

	return 0;
}
