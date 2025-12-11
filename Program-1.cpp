#include<iostream>
using namespace std;


int main(){
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;
    cout<<"Enter the Value of a ";
    cin>>a;
    cout<<"Enter the Value of b ";
    cin>>b;
    cout<<"Type of operation [Addition, Subtraction, Multiplication, Division]: ";
    string opr = "";
    cin>>opr;
    if(opr ==  "Addition")
        result = a+b;
    else if(opr == "Subtraction")
        result = a-b;
    else if(opr == "Multiplication")
        result = a*b;
    else if(opr == "Division")
        result = a/b;
    cout<<result<<endl;
    return 0;
}
