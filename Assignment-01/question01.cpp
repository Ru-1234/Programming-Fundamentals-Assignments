#include<iostream>
using namespace std;
int main(){

int wheels,car_body,figures,standard,sports,family;
int model_S , model_SP, model_F;
model_S = 0; model_SP = 0; model_F = 0;

//Taking inputs
          cout<<"\nWheels: ";
          cin>>wheels;
          cout<<"\nCar Bodies: ";
          cin>>car_body;
          cout<<"\nFigures: ";
          cin>>figures;
          cout<<"\nOrders:\n\tStandard: ";
          cin>>standard;
          cout<<"\n\tSports: ";
          cin>>sports;
          cout<<"\n\tFamily: ";
          cin>>family;

if(wheels>0 && car_body>0 && figures>0){    //first if

//model:standard
      if( wheels/4>=standard && car_body>=standard && figures/2>=standard)
          model_S=standard;
      else{
          if((wheels/4)<=car_body && wheels/4<=(figures/2))
              model_S=wheels/4;
          if(car_body<=(wheels/4) && car_body<=(figures/2))
              model_S=car_body;
          if((figures/2)<=car_body && (figures/2)<=(wheels/4))
              model_S=figures/2;
          }
wheels-=4*model_S;
car_body-=model_S;
figures-=2*model_S;
     
if(wheels>0 && car_body>0 && figures>0){

      if( wheels/6>=sports && car_body>=sports && figures>=sports)      //model:sports
              model_SP=sports;
      else{
          if((wheels/6)<=car_body && (wheels/6)<=figures)
                model_SP=wheels/6;
          if(car_body<=(wheels/6) && car_body<=figures)
                model_SP=car_body;
          if(figures<=car_body && figures<=(wheels/6))
                model_SP=figures;
          }
wheels-=6*model_SP;
car_body-=model_SP;
figures-=model_SP;
 
if( wheels>0 && car_body>0 && figures>0){

      if( wheels/4>=family && car_body/2>=family && figures/4>=family)  //model:family
      model_F=family;
      else{
          if(wheels/4<=car_body/2 && wheels/4<=figures/4)
          model_F=wheels/4;
          if(car_body/2<=wheels/4 && car_body/2<=figures/4)
          model_F=car_body/2;
          if(figures/4<=car_body/2 && figures/4<=wheels/4)
              model_F=figures/4;
         }  

/*if(model_F<0)
model_F=family+model_F;*/

 }//bracket of third if
}//bracket of second if
 }//bracket of first if
  
  
  //Displaying output
if(model_S==7){
cout<<"Lucky production! Exactly 7 cars of Model Standard built.";
}
if(model_SP==7){
cout<<"Lucky production! Exactly 7 cars of Model Sport built.";
}
if(model_F==7){
cout<<"Lucky production! Exactly 7 cars of Model Family built.";
}

if(model_S==standard && model_SP==sports && model_F==family){
cout<<"\nAll the orders fulfilled Built:"<<model_S<<" Standards, "<<model_SP<<" Sports, "<<model_F<<" Family";
}
else if(model_S<standard || model_SP<sports || model_F<family){
cout<<"\nCould not fulfill all the orders  Built:"<<model_S<<" Standards, "<<model_SP<<" Sports, "<<model_F<<" Family";
}

return 0;
}
