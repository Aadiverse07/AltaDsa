#include <iostream>
using namespace std;
int main()
{
    float orgiPrice, discPercent, taxpercent;
    cout<<"Enter the price of the product: ";
    cin>>orgiPrice;
    cout<<"Enter the discount percentage: ";
    cin>>discPercent;
    cout<<"Enter the tax percentage: ";
    cin>>taxpercent;
    float discountAmount =  orgiPrice *(discPercent / 100);
    float Taxamount = (orgiPrice - discountAmount) * (taxpercent / 100);
    float FinalPrice = orgiPrice - discountAmount + Taxamount;
    cout<<"The discount amount is: "<<discountAmount<<endl;
    cout<<"The tax amount is: "<<Taxamount<<endl;
    cout<<"The final price of the product is: "<<FinalPrice<<endl;
    return 0;
}