/* Name: KUSENA JIMMY */
/* Student Number: 25/U/BIO/01389/PD */


#include<stdio.h>
int main(void)
{
    int amounttosend;
    float transactionfee,feeamount, amountdeducted;

    printf("enter amount to send(shs):");
    scanf("%d",&amounttosend);
    printf("enter transaction fee(%%:"); 
    scanf("%f",&transactionfee);

    // calculate the fee amount using the formula
    feeamount =(amounttosend* (transactionfee/100));
    //display the calculated the value of amount deducted

    printf("feeamount is: %.2f\n",feeamount); //.2f  assign the fee amoung to two decimal places
    // calculate the amountdeducted using the formula

    amountdeducted=(amounttosend+feeamount);
    printf("\amountdeducted is:%.2f\n",amountdeducted);//.2f assign the output to 2decimal places





 return 0;   
}