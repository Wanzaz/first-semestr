#<stdio.h>
//Sierpinský fraktál


void TOH(int disk_numbers,char source,char auxilary,char destination)
{
   if(disk_numbers==0) return;
      TOH(disk_numbers-1,source,destination, auxilary);
      printf("\n%c to %c",source,destination);
      TOH(disk_numbers-1,auxilary,source, destination);
}
int main() 
{
   int disk_numbers=3;
   TOH(disk_numbers,'A','B','C');
   return 0;
}
