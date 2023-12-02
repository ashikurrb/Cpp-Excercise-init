#include <iostream>
using namespace std;

int main(){

    string name;
    int roll, maths, phy, computer;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll: ";
    cin>>roll;

    if (name == "james" && roll==784){
        cout<<"Enter maths mark: ";
        cin>>maths;
        cout<<"Enter phy mark: ";
        cin>>phy;
        cout<<"Enter computer mark: ";
        cin>>computer;
        int total = maths+phy+computer;
        float parc = (total/3);

        cout<<"Roll: "<<roll<<endl<<"Name: "<<name<<endl<<"Maths: "<<maths<<endl<<
        "Phy: "<<phy<<endl<<"Computer: "<<computer<<endl<<"Total Marks: "<<total<<        endl<<"Parcentage: "<<parc<<endl<<"Div: ";

           if(parc>=80){
                cout<<"First";
           }else{
                cout<<"Last";
                }
     }else{
         cout<<"Not Found";
     }

return 0;
}
