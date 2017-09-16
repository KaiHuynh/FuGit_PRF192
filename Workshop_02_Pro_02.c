/*
	Name: 
	Copyright: 
	Author: 
	Date: 15/09/17 18:42
	Description: 
*/
#include <stdio.h>

int main()
{
	int tf, ti, in_tax;
	int income, n;
	int pa = 9000000, pd = 3600000;
	
	printf("Your income of this year: ");
	scantf("%d", &income);
	printf("Number of dependent: ");
	scantf("%d", &n);
	
	tf = 12*(pa + n*pd);
	printf("Tax-free income: %d\n", tf);
	ti = income - tf;
	printf("Taxable income: %d\n", ti); 
	
	if (ti<=0) 
		printf("Income tax = 0");
	else if (ti<=5000000) 
		in_tax = (tf*0.05);
	else if (ti>5000000 && ti<=10000000)
		in_tax = (5000000*0.05 + (ti-5000000)*0.1);
	else if (ti>15000000 && ti<=23000000)
		in_tax = (5000000*0.05 + 10000000*0.1 + (ti-15000000)*0.15);
	else if (ti>33000000)
		in_tax = (5000000*0.05 + 10000000*0.1 + 18000000*0.15 + (ti-33000000)*0.20);	
	printf("Income tax: %d\n", in_tax);		
	getchar(); 
	printf("Thank you! :)");
	getchar();	
	return 0;	
}	
