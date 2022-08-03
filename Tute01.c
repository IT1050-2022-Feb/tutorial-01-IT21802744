/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1, mark2, tot; //declaring variables
   float avg;
   
   printf("Enter Sub 1 Marks: "); //use input mark 1
   scanf("%d", &mark1);
   
   printf("Enter Sub 2 Marks: "); //user input mark 2
   scanf("%d", &mark2);
   
   tot = mark1 + mark2; //total calculation
   
   avg = (float)tot / 2; //average calculation
   
   printf("Total is %d and Average is %.2f",tot, avg); //output
   
   return 0; //end of the program
}

