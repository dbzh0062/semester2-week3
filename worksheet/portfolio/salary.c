
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:
 * ID:
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 20000;
   float nationalInsurance = 5;
   float taxRate = 10;

    // calculate the deductions and final take-home salary

   float NI_Contribution = salary * (nationalInsurance/100);
   float tax_Contribution = (salary - NI_Contribution - 12500) * (taxRate/100);
   float take_Home = salary - NI_Contribution - tax_Contribution;
   
   printf("Salary £%f",salary);
   printf("NI contribution £%f",NI_Contribution);
   printf("Tax contribution £%f",tax_Contribution);
   printf("Take home salary £%f",take_Home);

    return 0;
 }