#include <iostream>
using namespace std;
string name;
    int basicsalary ,overtimehours;
     float overtime_pay;
    int rate_per_hour =100;
    float Netsalary;
void getemployeedetails(){

cout << "Enter employee name :";
cin >>name;
cout<<"Enter basic salary :";
cin >>basicsalary;
cout <<"Enter over time hours :";
cin >>overtimehours;
}
 void calculateOverTime(){


    overtime_pay = overtimehours * rate_per_hour;
    cout <<"OVERTIME PAY ="<<overtime_pay<<endl;
    }
    void calculateNetSalary(){

    Netsalary=basicsalary+overtime_pay;
    cout<< "NETSALARY ="<<Netsalary<<endl;

    }
   void  displaypayslip(){
    cout <<"=============================================================="<<endl;
    cout << "EMPLOYEE NAME :"<<name<<endl;
    cout <<"BASIC SALARY :"<<basicsalary<<endl;
    cout <<"OVERTIME HOURS :"<<overtimehours<<endl;
    cout <<"OVERTIME PAY :" <<overtime_pay<<endl;
    cout <<"NET SALARY :" <<Netsalary<<endl;
    }
    int main(){
        getemployeedetails();
        calculateOverTime();
     calculateNetSalary();
    displaypayslip();


    return 0;
    }
