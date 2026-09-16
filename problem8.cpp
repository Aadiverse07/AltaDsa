#include <iostream>
using namespace std;
int main()
{
    float weight ;
    float height ;
    double BMI ;
    cout << "Enter your weight in kg : ";
    cin >> weight;
    cout << "Enter your height in m*m : ";
    cin >> height;
    BMI = weight / (height * height);
    cout << "Your BMI is: " << BMI << endl  ;
    if (BMI < 18.5)
    {
        cout << "Category : You are Underweight" << endl;
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        cout << "Category : You are Normal weight" << endl;
    }
    else if (BMI >= 25 && BMI <= 29.9)
    {
        cout << "Category : You are Overweight" << endl;
    }
    else
    {
        cout << "Category : You are Obese" << endl;
    }
}