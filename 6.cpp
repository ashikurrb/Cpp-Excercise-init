#include <iostream>
using namespace std;

int main(){

int num1, num2, num3;
cout<< "Enter 1st Number: ";
cin>>num1;
cout<< "Enter 2nd Number: ";
cin>>num2;
cout<< "Enter 3rd Number: ";
cin>>num3;

if(num1>num2 && num1>num3){
    cout<<num1<<" is the largest";
}else if(num2>num3 && num2> num1){
     cout<<num2 <<" is the largest";
}else{
 cout<<num3 <<" is the largest";
}


return 0;
}
