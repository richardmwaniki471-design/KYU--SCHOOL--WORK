#include <iostream>

using namespace std;
float calculateBill (float numberofunitsconsumed){
    float electricbill;
              if(numberofunitsconsumed<=100){electricbill=numberofunitsconsumed*10;}
              else if (numberofunitsconsumed>100&& numberofunitsconsumed<=200){electricbill=numberofunitsconsumed*15;}
              else{electricbill=numberofunitsconsumed*20;}
              return electricbill;
              }

int main(){
float totalelectricbill,result,units;

    cout << "ELECTRICBILL" << endl;
    cout <<"============================================="<<endl;
    cout <<"enter units consumed";
    cin >> units;
    result=calculateBill(units);
    totalelectricbill=result;
    cout <<"total elecric bill =" << totalelectricbill;
    return 0;
}
