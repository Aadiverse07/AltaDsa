#include <iostream>
using namespace std;
int main()
{
    int Withdrwalamount;
    int Transactionfee = 2;
    float Accountbalance;
    
    cout << "Enter the Amount you want to withdraw : ";
    cin >> Withdrwalamount;
    cout << "Enter your Account Balance : ";

    cin >> Accountbalance;
    cout<<" Enter Total Amount Present in Account Now : "<< endl;

    if (Withdrwalamount > 0 && Withdrwalamount %100 == 0 && Accountbalance >= Withdrwalamount + Transactionfee)
    {
        cout << "Transaction Valid : true" << endl;
        cout << "Your Remaining Balance is : "<< Accountbalance - Withdrwalamount - Transactionfee << endl;
    }
    else{
        cout <<" Transaction Invalid : false " << endl;
    }
    

}