//Name:Romaisa        Roll_No:24I_0061

#include<iostream>
using namespace std;

int main(){
    
//Declaring Variables and assigning values to them
    int A,B,C,D,X;
    bool condition1,condition2,condition3,condition4;
    condition1=false,condition2=false,condition3=false,condition4=false;
        
//Taking inputs
    cout<<"\nEnter A: ";
    cin>>A;
    cout<<"\nEnter B: ";
    cin>>B;
    cout<<"\nEnter C: ";
    cin>>C;        
    cout<<"\nEnter D: ";
    cin>>D;
        
//Checking conditions
    if((A+B)>(C*D))
          condition1=true;         
    if((C%2==0)&&(D%2!=0))
          condition2=true;          
    if(((condition1==false)&&(condition2==false))&&(((A>=0)&&(B<0))||(C%D==0)))
          condition3=true;      
    if((condition1==false)&&(condition2==false)&&(condition3==false))
          condition4=true;
    
//Assigning values to X based on conditions given
    if(condition1)
         X=(((A*A)+(B*B))%(C+1))-D;      
    if(condition2)
        X=((A*D+B)/(C+1));        
    if(condition3)
        X=((A+B-C)*(D%(A+1)));
    if(condition4)
        X=A+B+C+D;
          
//Displaying Output
    if(X>1000)
       cout<<"\nResult is OUT OF RANGE";     
    else if(X==0)
       cout<<"\nZERO POINT";        
    else
       cout<<endl<<X;

return 0;
}
