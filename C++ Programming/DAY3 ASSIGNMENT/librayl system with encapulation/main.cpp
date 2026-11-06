#include<iostream>
using namespace std;
class Book{
private:
    string title;
    string author;
    int copies;

    //constructor};
public:
    Book(string t,string a,int c){
    title=t;
    author=a;
    copies=c;
    }
    void Display(){
    cout<<"BOOK TITLE  :"<<title<<endl;
    cout<<"BOOK AUTHOR  :"<<author<<endl;
    cout<<"COPIES AVAILABLE  :"<<copies<<endl;
    }

    void Borrowbook(){
    if(copies>1){copies--;
    cout <<"book borrowed successfully";}
    else{cout<<"no copy available";}
    }

    void Retunbook(){
    copies++;
    cout<<"book returned successfully"<<endl;}


    //destructor
     Book(){cout<<"book object destroyed"<<endl;}
     };
    int main(){
    Book b1("KIGOGO", "JOHN" ,5);
    b1.Display();

    b1.Borrowbook();
    b1.Display();

    b1.Retunbook();
    b1.Display();


    return 0;
    }
