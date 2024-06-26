#include<stdio.h>

/*Q.2 Gross Salary Calculator
Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
the base salary as chosen by the user.
*/

main()
{
	float basesalary;
	float HRA,DA,TA,GROSSSALARY;
	
	printf("Enter the basesalary = ");
	scanf("%f",&basesalary);	
	printf("Enter the HRP = ");
	scanf("%f",&HRA);	
	printf("Enter the DA = ");
	scanf("%f",&DA);	
	printf("Enter the TA = ");
	scanf("%f",&TA);
	
	HRA=(HRA/100)*basesalary;
	DA=(DA/100)*basesalary;
	TA=(TA/100)*basesalary;
	
	GROSSSALARY= basesalary+HRA+DA+TA;  
	
	printf("GROSSSALARY : rs.%.2f\n",GROSSSALARY);
			
}

