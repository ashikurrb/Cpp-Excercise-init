#include <iostream>
using namespace std;

int main(){
string name;
int id, unitCon;
float charge, surCharge, unitCharge1,unitCharge2, unitCharge3, unitCharge4;

    unitCharge1 = 1.20;
    unitCharge2 = 1.50;
    unitCharge3 = 1.80;
    unitCharge4 = 2.00;

cout<<"Enter customer name: ";
cin>>name;
cout<<"Enter ID: ";
cin>>id;
cout<<"Unit Consumed: ";
cin>>unitCon;


if(unitCon<=199){
    charge = unitCon*unitCharge1;
}else if(unitCon>=200 && unitCon<400){
        charge = unitCon*unitCharge2;
}else if(unitCon>=400 && unitCon<600){
        charge = unitCon*unitCharge3;
}else if(unitCon>=600){
        charge = unitCon*unitCharge4;
}else{
    cout<<"Enter a valid amount";
}

if(charge>400){
        surCharge = charge*15/100;
   }else{
    surCharge = 0;
   }

cout<<
"Customer name: "<<name<<endl<<
"ID No: "<<id<<endl<<
"Unit Consumed: "<<unitCon<<endl<<
"Main Bill: Tk. "<<charge<<" @"<<unitCharge1<<" per unit"<<endl<<
"Surcharge: Tk. "<<surCharge<<endl<<
"Net amount to be paid: TK. "<<charge+surCharge;





return 0;
}
