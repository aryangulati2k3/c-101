/*The distance between two cities (in km) is input through the keyboard. Write a program to convert and 
print this distance in meters, feet, inches and centimeters.*/

#include <stdio.h>

int main(){
    float distance;
    
    printf("Enter the distance between two cities in km:\n");
    scanf_s("%f",&distance);

    // 1 km = 1000 m
    printf("The distance in meters is %f\n",distance * 1000);
    // 1 km = 3280.84 feet
    printf("The distance in feet is %f\n",distance * 3280.84);
    // 1 km = 39370.08 inches
    printf("The distance in inches is %f\n",distance * 39370.08);
    // 1 km = 100000 cm
    printf("The distance in centimeters is %f\n",distance * 100000);
    
    return 0;
}