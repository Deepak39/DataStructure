
/*
Exploring Data Types (100 Marks)
For this challenge, you need to read a line from stdin and check whether it is of type integer, float or string.
If input is-
    Integer print 'This input is of type Integer.' to the stdout
    Float print 'This input is of type Float.' to the stdout
    String print 'This input is of type string.' to the stdout
    else print 'This is something else.' to the stdout.
Input Format
A single line to be taken as input as save it to a variable(name of your choice). 
Constraints
1 < |s| < 10000
Output Format
Print the text according to the data type you get as an input. 
Sample TestCase 1
Input
-32767
Output
This input is of type Integer.
Explanation
If the given input is of type integer, then you need to print 'This input is of type Integer.' to the stdout, else if the given input is of type float, then you need to print 'This input is of type Float.' to the stdout, else if the given input is of type string, then you need to print 'This input is of type string' to the stdout, else print 'This is something else' to the stdout.
*/

//Solution
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
   char input[10000] = "";
   double x;
   int num;
   char str[20] = "";
   int assignment[5] = {0};
   double tolerance = 1e-12;

   fgets(input, 100, stdin);
   
   if (sscanf(input, "%lf", &x) == 1) {
      // Is it a number? All integers are also doubles.
      num = (int)x; // We cast to int. 
      if ( fabs(x - num)/x > tolerance ) {
         printf("This input is of type Float.");
      } else { 
         printf("This input is of type Integer.");
      }
   } else if (sscanf(input, "%s", str) == 1) { 
      // Check if it is string
      printf("The input is of type string.");
   } else { 
      // No match error.
      printf("This is something else.");
   }
}
