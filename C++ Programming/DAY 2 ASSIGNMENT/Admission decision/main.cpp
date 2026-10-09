# include <iostream >
using namespace std;
int main(){
    string studentname;
    int age ,score;

    cout<< "enter student name"<<endl;
    cin>>studentname;
    cout<< "enter student age"<<endl;
    cin>>age;
    cout<< "enter exam score"<<endl;
    cin >> score;

    cout <<"================================================="<< endl;
    cout<< "Name"<<studentname<<endl;
    cout << "age"<<age<<endl;
    cout <<"score"<<score<<endl;



    if(age > 18){
        if(score > 50 ){cout << "Admitted ";}
        else{ cout << "Not Admitted :Low Score";}
    }
    else{ cout << "Not admitted :underage"; }




    return 0;


}
