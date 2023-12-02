#include <iostream>
using namespace std;

int main(){

int maths, phy, chem;
cout<< "Math mark: ";
cin>>maths;
cout<< "Phy mark: ";
cin>>phy;
cout<< "Chem mark: ";
cin>>chem;
int total = maths+phy+chem;
int totalMP = maths+phy;

if(maths>=65 && phy>=55 && chem>=50 && total>=190 || totalMP>=140){
cout<<"Eligible";
}else{
    cout<<"Not Eligible";
}


return 0;
}
