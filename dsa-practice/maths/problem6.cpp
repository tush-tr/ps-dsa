#include<iostream>
using namespace std;
int main(){
    float weight,height;
    int age;
    float clbmr,bmr;
    char gender[20];
    cout<<"Choose your gender -- male/female: ";
    cin>>gender;
    cout<<"Enter your weight(in kg): ";
    cin>>weight;
    cout<<"Enter your height(in cm): ";
    cin>>height;
    cout<<"Enter your age: ";
    cin>>age;
    clbmr = 10*weight + 6.25*height + 5 * age;
    if(gender=="male"){
        bmr = clbmr +5;
    }
    else{
        bmr = clbmr -161; 
    }
    cout<<endl<<"your bmr is: "<<bmr<<endl;
    return 0;
}