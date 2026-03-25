/* Name: Your Full Name */
/* Student Number: Your Registration Number */

#include<stdio.h>
int main()
{

   float unitsconsumed, costperunit, totalelectricitybill;

   printf("enter the unitsconsumed:"); 
   scanf("%f",&unitsconsumed);         

   printf("enter the costperunit:");
   scanf("%f",&costperunit);

   
   totalelectricitybill=((unitsconsumed*costperunit));
      
   printf("totalelectricitybill is:%.2fUGX\n", totalelectricitybill);



return 0;  
}
