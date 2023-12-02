#include <iostream>
using namespace std;

int main(){

int temp;
cout<<"Enter Temparature: ";
cin>>temp;

if(temp<=0){
    cout<<"Freezing Weather";
}else if(temp>0 && temp<=10){
    cout<<"Very Cold";
}else if(temp>10 && temp<=20){
    cout<<"Cold Weather";
}else if(temp>20 && temp<=30){
    cout<<"Normal in Temp";
}else if(temp>30 && temp<=40){
    cout<<"Its Hot";
}else if(temp>=40){
    cout<<"Very Hot";
}else{
    cout<<"Enter Temp in NUMBER you Stupid";
}

return 0;
};
