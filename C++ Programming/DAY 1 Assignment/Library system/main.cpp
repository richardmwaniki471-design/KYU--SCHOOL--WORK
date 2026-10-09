#include <iostream>

using namespace std;

int calculatefinerate(int overdue){

if(overdue<=7){return 20;}
else if(overdue>=8 && overdue <=14 ){return 50;}
else{return 100;}

}
int main()
{
    int BookID,Duedate,Returndate,daysoverdue,finerate ,fineamount;
    cout << "Enter book ID" << endl;
    cin >> BookID;
    cout << "Enter due date" <<endl;
    cin >> Duedate;
    cout <<"Enter return date" <<endl ;
    cin >> Returndate;

    daysoverdue= Returndate-Duedate;
    finerate=calculatefinerate(daysoverdue);
    fineamount =daysoverdue*finerate;

cout << " book ID is :: " <<BookID <<endl;
cout << "due date :: "<<Duedate << endl;
cout << "return date :: "<< Returndate << endl ;
cout << "days over due ::" << daysoverdue << endl;
cout << "fine rate :: " << finerate <<endl;
cout << "fine amount" <<fineamount<<endl;
    return 0;
}
