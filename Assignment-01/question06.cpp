#include <iostream>
#include <string>
using namespace std;

int main() { 
  long long int cnic;    
  string fullname;
  string division,district,tehsil,uc;
  string birth_month,gender,province,household_type;
  int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,
  dateOf_birth,monthOf_birth,year_of_birth,family_treeNo;
  bool contains_digits=false,birth_date=false,birth_year=false;   

      cout<<"Enter your name: ";
      getline(cin, fullname);
      cout<<"Enter your CNIC number: ";
      cin>>cnic;

//cnic is 13 digits/not
          if((cnic<1000000000000) && (cnic>9999999999999)){
                cout<<"\nInvalid CNIC! It must be exactly 13 digits.";
                }
          else{
//Extracting cnic digits from right to left
              d13=cnic%10; 
              cnic/=10;
              d12=cnic%10; 
              cnic/=10;
              d11=cnic%10;
              cnic/=10;
              d10=cnic%10; 
              cnic/=10;
              d9=cnic%10; 
              cnic/=10;
              d8=cnic%10; 
              cnic/=10;
              d7=cnic%10; 
              cnic/=10;
              d6=cnic%10; 
              cnic/=10;
              d5=cnic%10; 
              cnic/=10;
              d4=cnic%10; 
              cnic/=10;
              d3=cnic%10; 
              cnic/=10;
              d2=cnic%10; 
              cnic/=10;
              d1=cnic;
 
  cout<<"\nCNIC NO: "<<d1<<d2<<d3<<d4<<d5<<d6<<d7<<d8<<d9<<d10<<d11<<d12<<d13;
  cout<<endl;
    
    if((d1>=0 && d1<=9) && (d2>=0 && d2<=9) && (d3>=0 && d3<=9) && (d4>=0 && d4<=9) && (d5>=0 && d5<=9) && 
    (d6>=0 && d6<=9) && (d7>=0 && d7<=9) && (d8>=0 && d8<=9) && (d9>=0 && d9<=9) && (d10>=0 && d10<=9) && 
    (d11>=0 && d11<=9) && (d12>=0 && d12<=9) && (d13>=0 && d13<=9)) {
    contains_digits=true;
      }

      if(!contains_digits){
        cout<<"\nCNIC should only contain all digits.";
        return 1;
        }
//gender:
        if(d13%2==0)
            gender="Female";
        else
            gender="Male";

    dateOf_birth=(d7*10)+d8;
    monthOf_birth=(d5*10)+d6;
    year_of_birth=(d3*10)+d4;

        if(dateOf_birth>=1 && dateOf_birth<=31)
            birth_date=true;
        else
            birth_date=false;

        if(year_of_birth>=80 && year_of_birth<=99){
            birth_year=true;
            year_of_birth=(1*1000)+(9*100)+year_of_birth;
        }
        
        else if(year_of_birth>=0 && year_of_birth<=24){
            birth_year=true;
            year_of_birth=(2000)+year_of_birth;
        }
        
        else
            birth_year=false;

        
        if(monthOf_birth==1)
              birth_month="january";
        else if(monthOf_birth==2)
              birth_month="Februrary";
        else if(monthOf_birth==3)
              birth_month="March";
        else if(monthOf_birth==4)
              birth_month="April";
        else if(monthOf_birth==5)
              birth_month="May";
        else if(monthOf_birth==6)
              birth_month="June";
        else if(monthOf_birth==7)
              birth_month="July";
        else if(monthOf_birth==8)
              birth_month="August";
        else if(monthOf_birth==9)
              birth_month="September";
        else if(monthOf_birth==10)
              birth_month="October";
        else if(monthOf_birth==11)
              birth_month="November";
        else if(monthOf_birth==12)
              birth_month="December";
        else
              birth_month="Invalid";

//Province
        if(d1==1)
              province="Khyber Pakhtunkhwa";
        else if(d1==2)
              province="FATA";
        else if(d1==3)
              province="Punjab";
        else if(d1==4)
              province="Sindh";
        else if(d1==5)
              province="Balochistan";
        else if(d1==6)
              province="Islamabad(ICT)";
        else if(d1==7)
              province="Gilgit-Baltistan";
        else if(d1==8)
              province="Azad Jammu & Kashmir";
        else
              province="Invalid";

//Division
if(d1==3){
if(d2==7){
 division="Mianwali";
if(d3==2){
district="Talagang";
//Tehsil
if(d4==0){
tehsil="Lawa";
//union council
if(d5==3)
uc="Kot-gulla UC";
}}}}

else if(d1==4){
if(d2==2){
 division="Karachi division";
if(d3==1){
 district="Karachi central";
if(d4==0){
 tehsil="Liaquatabad";
if(d5==1)
  uc="UC-7";
}}}}

else
 division="unknown", district="unknown",  tehsil="unknown", uc="unknown";
//Household type
              if(d6==1 || d6==2)
                    household_type="Joint Family";
              else if(d6==3 || d6==4 || d6==5)
                    household_type="Nuclear Family";
              else
                    household_type="Extended Family";

//family tree number
          family_treeNo= (d6*1000000)+(d7*100000)+(d8*10000)+(d9*1000)+(d10*100)+(d11*10)+(d12*1);

//Output
              cout<<"\nName: "<<fullname;
              cout<<"\nGender: "<<gender;
              if( birth_date && birth_year && birth_month!="Invalid"){
              cout<<"\nDate of birth: "<<dateOf_birth<<" "<<birth_month<<" "<<year_of_birth;
              }
              
              else
              cout<<"\ndate of birth: Invalid";
              cout<<"\nProvince: "<<province;
              cout<<"\nDivision: "<<division;
              cout<<"\nDistrict: "<<district;
              cout<<"\nTehsil: "<<tehsil;
              cout<<"\nUnion Council: "<<uc;
              cout<<"\nFamily tree no: "<<family_treeNo;
              cout<<"\nHousehold Type: "<<household_type;
              }   

return 0;
}

