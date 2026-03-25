/* Name: KUSENA JIMMY */
/* Student Number: 25/U/BIO/01389/PD */

# include<stdio.h>
int main()
{
  
    float distancetravelled, fuelused, fuelefficiency;
    printf("enter distancetravelled(km):"); 
    scanf("%d",&distancetravelled);
    printf("enter fuelused(litres)");
    scanf("%d",&fuelused);

    
    fuelefficiency=(distancetravelled/fuelused);

    printf("fuelefficiency is(km/l):%.2f\n",fuelefficiency); 
 

 return 0;   
}
