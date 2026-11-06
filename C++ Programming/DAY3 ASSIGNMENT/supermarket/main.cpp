# include <iostream>
using namespace std;
float calculatediscount(float purchaseamount){
    float discount;
if( purchaseamount<5000)
    {discount=purchaseamount*0.05;
    }
    else if (purchaseamount>=5000&&purchaseamount<=9999){discount=purchaseamount*0.1;}
    else{discount=purchaseamount *0.15;}
    return discount;
    }

int main(){
    float finalamount,result;
    int amount;
    cout << "DISCOUNT SYSTEM" << endl;
    cout <<" ================================"<<endl;
    cout <<"enter price amount "<<endl;
    cin >> amount;
    result=calculatediscount(amount);
    finalamount=amount-result;
    cout <<"final amount ="<<finalamount;
    return 0;}

