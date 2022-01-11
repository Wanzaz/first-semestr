 #include <stdio.h>
 #include <stdlib.h>

 int NSD(int a, int b)
 {
    if ((a == 0) || (b == 0))
   {
      printf ("Cannot determine if one of the numbers is zero \n");
      return 0;
   }
   
   if (a <0) a = -a;
   if (b <0) b = -b;

   while (a != b)
   {
      if (a> b) a = a-b;
           else b = b-a;
   }
   return a;
 }


 int main ()
 {
   int a, b;
   printf ("The program will specify the largest common divisor for 2 specified numbers \n \n");

   printf ("\n Enter the first number:");
   scanf ("%d", & a);

   printf ("\n Enter the second number:");
   scanf ("%d", & b);


   printf ("\n The largest common divisor is %d \n \n", NSD(a, b));
   return 0;
 }
