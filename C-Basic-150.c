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
//     printf("Mobile : 91-6289154483\n");
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























