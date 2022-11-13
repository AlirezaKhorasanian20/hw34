#include<iostream>
using namespace std;
int main()
{
	int salary=0;
	int finalSalary=0;
	cout<<"Enter Salay for 1 month : ";
	cin>>salary;
	if (salary<6000000)
			finalSalary=salary;
	else if(salary>=6000000 && salary<8000000 )
			finalSalary=salary-(salary*0.05);
	else if (salary>=8000000 && salary<10000000 )
			finalSalary=salary-(salary*0.10);
	else if (salary>=10000000 && salary<14000000 )
			finalSalary=salary-(salary*0.15);
	else if (salary>=14000000 && salary<18000000 )
			finalSalary=salary-(salary*0.20);
   else if (salary>=18000000 && salary<25000000 )
			finalSalary=salary-(salary*0.25);
	else if (salary>=25000000 )
			finalSalary=salary-(salary*0.35);
	cout<<"Final Salary Is : "<<finalSalary;
	return 0;
}
