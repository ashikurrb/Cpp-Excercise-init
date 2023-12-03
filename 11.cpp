#include <iostream>
using namespace std;

int main(){

char alp;

cout<<"Enter alphabet: ";
cin>>alp;

if(alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U'){
   cout<<alp<<" is Vowel";
}else if(alp>='a'&&alp<='z'||alp>='A'&&alp<='Z'){
    cout<<alp<<" is Consonent";
}else{
    cout<<alp<<" is not an Alphabet";
}






return 0;
}
