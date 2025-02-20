

#include<iostream>
using namespace std;

int main(){
long long int num;

cout<<"Enter 64-bit number: ";
cin>>num;

bool condition=num%2;

if(condition)
cout<<"\n"<<num<<" is Odd.";
else
cout<<"\n"<<num<<" is Even.";

return 0;
}
