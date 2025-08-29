// 1. Print name, DOB, and mobile number
//
// Write a C program to print your name, date of birth, and mobile number.
// Expected Output:
//
// Name   : Alexandra Abramov
// DOB    : July 14, 1975
// Mobile : 99-9999999999

// #include<stdio.h>
// int main(){
//     printf("Name   : Sandipan Majumder\n");
//     printf("DOB    : March 01, 2005\n");
//     printf("Mobile : 91-**********\n");
// }

// 2. Get the C version in use
//
// Write a C program to get the C version you are using.
// Expected Output:
//
// We are using C18!

// #include <stdio.h>
// int main(){
//     printf("We are using C%d!\n", __STDC_VERSION__);
//     return 0;
// }

// 3. Print block 'F' and a large 'C'
//
// Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
// Expected Output:
//
// ######
// #
// #
// #####
// #
// #
// #
//     ######
//   ##      ##
//  #
//  #
//  #
//  #
//  #
//   ##      ##
//     ######

// #include<stdio.h>
// int main() {
//     printf("######\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#####\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//
//     printf("   ######  \n");
//     printf(" ##      ##\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//     printf("#\n");
//     printf(" ##      ##\n");
//     printf("   ######  \n");
//
//
// }


// 4. Reverse characters ('X', 'M', 'L')
//
// Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

// #include <stdio.h>
// int main() {
//     char a ='X';
//     char b ='M';
//     char c ='L';
//     printf("The reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);
// }

// 5. Compute rectangle perimeter and area
//
// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

// #include <stdio.h>
// int main() {
//     int l=7,w=5,perimeter,area;
//     perimeter=2*(l+w);
//     area=l*w;
//     printf("Perimeter of the rectangle = %d inches",perimeter);
//     printf("\nArea of the rectangle = %d square inches",area);
//
// }
//

// 6. Compute circle perimeter and area
//
// Write a C program to compute the perimeter and area of a circle with a given radius.
//taken radius as input 6 inches
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches

// #include <stdio.h>
// #define PI 3.14159265359
// int main() {
//     int r;
//     float perimeter,area;
//     printf("Enter the radius : ");
//     scanf("%d",&r);
//     perimeter=2*PI*r;
//     area=PI*r*r;
//     printf("Perimeter of the Circle = %f inches",perimeter);
//     printf("\nArea of the Circle = %f square inches",area);
// }

// 7. Display multiple variables of various types
//
// Write a C program to display multiple variables.
// Sample Variables :
// a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
// Declaration :
// int a = 125, b = 12345;
// long ax = 1234567890;
// short s = 4043;
// float x = 2.13459;
// double dx = 1.1415927;
// char c = 'W';
// unsigned long ux = 2541567890;

// #include <stdio.h>
// int main() {
//     int a = 125, b = 12345;
//     long ax = 1234567890;
//     short s = 4043;
//     float x = 2.13459;
//     double dx = 1.1415927;
//     char c = 'W';
//     unsigned long ux = 2541567890;
//
//     printf("a + c = %d + %c = %d\n",a,c,(a+c));
//     printf("x + c = %f + %c = %f\n",x,c,(x+c));
//     printf("dx + x = %lf + %f = %f\n",dx,x,(dx+x));
//     printf("((int) dx) + ax = %ld + %ld = %lld\n",(int)dx,ax,(int)dx+ax);
//     printf("a + x = %d + %f = %f\n",a,x,(a+x));
//     printf("s + b = %d + %d = %d\n",s,b,(s+b));
//     printf("ax + b = %ld + %d = %lld\n",ax,b,(ax+b));
//     printf("s + c = %d + %c = %d\n",s,c,(s+c));
//     printf("ax + c = %ld + %c = %lld\n",ax,c,(ax+c));
//     printf("ax + ux = %ld + %lu = %llu\n",ax,ux,(ax+ux));
// }

// 8. Convert days to years, weeks, and days
//
// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.
//
// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3

// #include <stdio.h>
// int main() {
//     int year,week,days;
//     printf("Number of days : ");
//     scanf("%d",&days);
//     year = days / 365 ;
//     week = (days % 365) / 7;
//     days = (days % 365) % 7;
//     printf("Years: %d\n",year);
//     printf("Weeks: %d\n",week);
//     printf("Days: %d",days);
// }

// 9. Calculate sum of two integers
//
// Write a C program that accepts two integers from the user and calculates the sum of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 38
// Expected Output:
// Sum of the above two integers = 63

// #include <stdio.h>
// int main() {
//     int a,b,sum;
//     printf("Input the first integer: ");
//     scanf("%d",&a);
//     printf("Input the second integer: ");
//     scanf("%d",&b);
//     sum=a+b;
//     printf("Sum of the above two integers = %d",sum);
// }

// 10. Calculate product of two integers
//
// Write a C program that accepts two integers from the user and calculates the product of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 15
// Expected Output:
// Product of the above two integers = 375

// #include <stdio.h>
// int main() {
//     int a,b,product;
//     printf("Input the first integer: ");
//     scanf("%d",&a);
//     printf("Input the second integer: ");
//     scanf("%d",&b);
//
//     product = a*b;
//
//     printf("Product of the above two integers = %d",product);
// }

// 11. Calculate average weight for purchases
//
// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

// #include<stdio.h>
// int main() {
//     int weight1,weight2,item1,item2;
//     float average;
//     printf("Weight - Item1: ");
//     scanf("%d",&weight1);
//     printf("No. of item1: ");
//     scanf("%d",&item1);
//     printf("Weight - Item2: ");
//     scanf("%d",&weight2);
//     printf("No. of item2: ");
//     scanf("%d",&item2);
//
//     average = ((weight1 * item1)+(weight2 * item2))/(item1 + item2);
//
//     printf("Average Value = %f",average);
// }

// 12. Print employee ID and monthly salary
//
// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
// Print the ID and salary (with two decimal places) of the employee for a particular month.
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

// #include <stdio.h>
// int main()
// {
//     int id,hr,amount;
//     float salary;
//     printf("Input the Employees ID(Max. 10 chars): ");
//     scanf("%d",&id);
//     printf("Input the working hrs: ");
//     scanf("%d",&hr);
//     printf("Salary amount/hr: ");
//     scanf("%d",&amount);
//
//     salary = hr * amount;
//
//     printf("Employees ID = %d\n",id);
//     printf("Salary = U$ %.2f",salary);
// }


// 13. Find the maximum of three integers (*)
//
// Write a C program that accepts three integers and finds the maximum of three.
// Using Arithmetic Operations and abs() without using Ternary Operators & Loops.
// Hint :- (a + b + abs(a - b)) / 2
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int x, y, z, result, max; // Declare variables
//
//     // Prompt user for the first integer and store in 'x'
//     printf("\nInput the first integer: ");
//     scanf("%d", &x);
//
//     // Prompt user for the second integer and store in 'y'
//     printf("\nInput the second integer: ");
//     scanf("%d", &y);
//
//     // Prompt user for the third integer and store in 'z'
//     printf("\nInput the third integer: ");
//     scanf("%d", &z);
//
//     // Calculate the result
//     result = (x + y + abs(x - y)) / 2;
//
//     // Calculate the maximum value
//     max = (result + z + abs(result - z)) / 2;
//
//     // Print the maximum value
//     printf("\nMaximum value of three integers: %d", max);
//     printf("\n");
//
//     return 0;
// }

// 14. Calculate bike’s average consumption
//
// Write a C program to calculate a bike’s average consumption from
// the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
// Test Data :
// Input total distance in km: 350
// Input total fuel spent in liters: 5
// Expected Output:
// Average consumption (km/lt) 70.000

// #include <stdio.h>
//
// int main()
// {
//     int total_distance;
//     float fuel_spent, average_consumption;
//
//     printf("Input total distance in km: ");
//     scanf("%d",&total_distance);
//     printf("Input total fuel spent in liters: ");
//     scanf("%f",&fuel_spent);
//     average_consumption = total_distance / fuel_spent;
//     printf("Average consumption (km/lt) %.2f",average_consumption);
//     return 0;
// }

// // 15. Calculate distance between two points. (*)
// //
// // Write a C program to calculate the distance between two points.
// // Test Data :
// // Input x1: 25
// // Input y1: 15
// // Input x2: 35
// // Input y2: 10
// // Expected Output:
// // Distance between the said points: 11.1803
//
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int x1, y1, x2, y2;
//     float distance;
//     printf("Input x1: ");
//     scanf("%d", &x1);
//     printf("Input y1: ");
//     scanf("%d", &y1);
//     printf("Input x2: ");
//     scanf("%d", &x2);
//     printf("Input y2: ");
//     scanf("%d", &y2);
//
//     distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
//     printf("Distance between the said points: %.4f", distance);
// }



