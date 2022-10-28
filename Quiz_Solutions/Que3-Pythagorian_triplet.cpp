// Write a function to check th given triplet is a pythagorian triplet or not.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the triplet as  a b c : ";
    cin>>a>>b>>c;
    if((a*a)+(b*b)==(c*c))
    {
        cout<<"Pythagorian Triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorian Triplet"<<endl;
    }
}