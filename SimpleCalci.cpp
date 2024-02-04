#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double a,b;
    string operation;
    cout<<"Enter the First number"<<endl;
    cin>>a;

    cout<<"Enter the operation you want to perform (+, -, *, /) :"<<endl;
    cin>> operation;

    cout<<"Enter the Second number"<<endl;
    cin>>b;

    if(operation == "+" ){
        cout<<"The sum is: "<< a +b <<endl;
   } else if (operation == "-" ) {
        cout<<"The difference is: "<< a - b <<endl;
   } else if (operation == "*" ){
        cout<<"The product is: "<< a * b <<endl;
   } else if (operation == "/" ){
        cout<<"The answer is: "<< a / b <<endl;
   }

   else {
        cout<< "Not a recognised operation."<<endl;
   } 

    return 0;

}