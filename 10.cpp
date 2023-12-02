#include <iostream>
using namespace std;

int main(){

char chrc;
cout<<"Enter charecter: ";
cin>>chrc;

if(chrc>='a' && chrc<='z' || chrc>='A' && chrc<='Z' ){

    cout<<chrc<<" is an Alphabet";
}else if(chrc>='0'&& chrc<='9'){
    cout<<chrc<<" is an Number";
}else{
    cout<<chrc<<" is an special charecter";
}

return 0;
}
