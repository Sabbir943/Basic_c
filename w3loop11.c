/*
15. Write a C program to calculate
 the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
*/
#include <stdio.h>  // Include the standard input/output header file.

int  main(){
  int i, f = 1, num;  // Declare variables 'i' for loop counter, 'f' to store factorial, 'num' for user input.

  printf("Input the number : ");  // Print a message to prompt user input.
  scanf("%d", &num);  // Read the value of 'num' from the user.

  for(i = 1; i <= num; i++)  // Start a loop to calculate factorial.
      f = f * i;  // Calculate factorial.

  printf("The Factorial of %d is: %d\n", num, f);  // Print the calculated factorial.
   return 0;  // Indicate that the program has executed successfully.
}