# include<iostream>
using namespace std;
int main(){
string studentname;
int marks;
cout <<"enter student name :";
cin >>studentname;
cout << "enter marks :";
cin >>marks;


cout<< "=========================================="<<endl;
cout <<"student name  :"<<studentname<<endl;
cout <<"student marks  :"<<marks;


if (marks<=100 && marks>=70){cout <<"A"<< endl;}
else if(marks>=60 && marks <=69){cout << "B"<<endl;}
else if(marks>=50 && marks<=59){cout << "C"<<endl;}
else if(marks>=40 && marks<=49){cout << "D"<<endl;}
else{cout<< "E";}


return 0;






}
