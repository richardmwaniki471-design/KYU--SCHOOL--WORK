#include <iostream>

using namespace std;

float calculateTax(float grosssalary)
{
    float taxamount;

if(grosssalary<30000){taxamount=grosssalary*0.05;}
else if(grosssalary>=30000 && grosssalary>=59999){
    taxamount=grosssalary*0.1;}
else{taxamount=grosssalary*0.15;}

return taxamount;}


int main()
{float netsalary,result;
int salary;

    cout << "EMPLOYEE SALARY SYSTEM" << endl;
    cout << "================================" <<endl;
    cout << "Enter salary :: " <<endl;
    cin >> salary;

    result = calculateTax(salary);
    netsalary=salary - result;

    cout << "Gross salary := "<< salary << endl ;
    cout << "Tax amount   := " << result <<endl ;
    cout << "Net salary   := " <<netsalary <<endl;
    cout <<"==================================";
    return 0;
}
