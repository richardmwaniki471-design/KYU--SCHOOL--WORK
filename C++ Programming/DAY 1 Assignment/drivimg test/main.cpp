#include <iostream>

using namespace std;

int main()
{
    string studentname;
    float theorytestmarks;
    float practicaltestmarks;

    cout << "Enter student name" << endl;
    cin >> studentname;

    cout <<"Enter theory test marks" <<endl;
    cin >> theorytestmarks;

    cout <<"Enter practical test marks"<<endl;
    cin >> practicaltestmarks;

    float averagescore;
    averagescore=(theorytestmarks+practicaltestmarks)/2;



    cout <<"student name :"<< studentname<<endl;
    cout <<"theory test marks"<< theorytestmarks <<endl;
    cout <<"practical test marks" <<practicaltestmarks<<endl;
    cout <<"average score"<< averagescore<<endl;

    if(averagescore>=50){cout <<"PASSED";}
    else{cout <<"FAILED";}

    return 0;
}
