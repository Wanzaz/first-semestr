 #include <stdio.h>
 #include <stdlib.h>
 
 int main ()
 {
   int a, b;
   printf ("The program will specify the largest common divisor for 2 specified numbers \n \n");
   
   printf ("\n Enter the first number:");
   scanf ("%d", & a);
   
   printf ("\n Enter second number:");
   scanf ("%d", & b);
   
   // algorithm is valid only for natural numbers
   if ((a == 0) || (b == 0))
   {
      printf ("Cannot determine if one of the numbers is zero \n");
      system ("pause");
      return 0;
   }
   if (a <0) a = -a;
   if (b <0) b = -b;
  
   while (a != b)
   {
      if (a> b) a = a-b;
           else b = b-a;
   }

   printf ("\n The largest common divisor is %d \n \n", a);
   
   system ("pause");
   return 0;
 }
