#include<iostream>
#include<cstring>
using namespace std;

int main(){
 
    int len;
    string password;
    char p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16;
    char last_char;
    bool password_length=true;
    bool uppercase_letter=false, lowercase_letter=false, digit=false , special_char=false, spaces=false;
    bool consecutive_char=false;
    cout<<"\nEnter your password(Note! passsword must be between 8 and 16) : ";
    cin>>password;
    len=password.length();
    last_char=password[len];
    if(len<8 || len>16)
        password_length=false;
     
        if(len>0)
        p1=password[0];
        else
        p1='\0';
       
        if(len>1)
        p2=password[1];
        else
        p2='\0';
     
        if(len>2)
        p3=password[2];
        else
        p3='\0';
     
        if(len>3)
        p4=password[3];
        else
        p4='\0';
       
        if(len>4)
        p5=password[4];
        else
        p5='\0';
       
        if(len>5)
        p6=password[5];
        else
        p6='\0';
       
        if(len>6)
        p7=password[6];
        else
        p7='\0';
       
        if(len>7)
        p8=password[7];
        else
        p8='\0';
       
        if(len>8)
        p9=password[8];
        else
        p9='\0';
       
        if(len>9)
        p10=password[9];
        else
        p10='\0';

        if(len>10)
        p11=password[10];
        else
        p11='\0';

        if(len>11)
        p12=password[11];
        else
        p12='\0';

        if(len>12)
        p13=password[12];
        else
        p13='\0';
       
        if(len>13)
        p14=password[13];
        else
        p14='\0';
              
        if(len>14)
        p15=password[14];
        else
        p15='\0';
       
       if(len>15)
       p16=password[15];
       else
       p16='\0';
    
        
    if(!password_length){
        cout<<"\nError! Password must be 8 - 16 characters";
    }
    
    else{

    if(len==8){
    
     if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
       (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z')) 
                    uppercase_letter = true;
    
      if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
        (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z')) 
                    lowercase_letter = true;
      
      if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<='9') || (p7>='0' && p7<='9') || (p8>='0' && p8<='9')) 
                    digit = true;
                    
      if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' )
                  special_char = true;
                  
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8)) 
                consecutive_char=true;
                
       if (p1 ==' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ')
                 spaces=true;
                }
                    
     else if(len==9){
      
       if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')||(p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9')) 
                    digit = true;  
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*')
                  special_char = true;
        
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9)) 
                consecutive_char=true; 
       
        if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ')
                spaces=true;
       
          }
       
       else if(len==10){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')||(p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9') || (p10>='0' && p10<='9')) 
                    digit = true; 
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*') 
                  special_char = true;
         
       if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10)) 
                  consecutive_char=true;
                  
       if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ')
                    spaces=true;
         }    
            
       else if(len==11){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z') || (p11>='A' && p11<='Z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z') || (p11>='a' && p11<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')||(p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9') || (p10>='0' && p10<='9') || (p11>='0' && p11<='9')) 
                    digit = true; 
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*' ||
         p11=='@' || p11=='#' || p11=='$' || p11=='%' || p11=='&' || p11=='*'  ) 
                  special_char = true;
                  
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10) || (p9 == p10 && p10 == p11)) 
                  consecutive_char=true;        
       
        if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ' || 
        p11 == ' ')
        spaces=true;
        
                }                
                
        else if(len==12){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z') || (p11>='A' && p11<='Z') || (p12>='a' && p12<='z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z') || (p11>='a' && p11<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')||(p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9') || (p10>='0' && p10<='9') || (p11>='0' && p11<='9')) 
                    digit = true; 
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*' ||
         p11=='@' || p11=='#' || p11=='$' || p11=='%' || p11=='&' || p11=='*'  ) 
                  special_char = true;
                  
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10) || (p9 == p10 && p10 == p11) || 
        (p10 == p11 && p11 == p12)) 
                   consecutive_char=true;

       if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ' || 
        p11 == ' ' || p12 == ' ')
                    spaces=true;
        }
                
        else if(len==13){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z') || (p11>='A' && p11<='Z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z') || (p11>='a' && p11<='z') || (p12>='a' && p12<='z') ||
           (p13>='a' && p13<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')||(p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9') || (p10>='0' && p10<='9') || (p11>='0' && p11<='9')) 
                    digit = true; 
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*' ||
         p11=='@' || p11=='#' || p11=='$' || p11=='%' || p11=='&' || p11=='*'  ) 
                  special_char = true;
         
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10) || (p9 == p10 && p10 == p11) || 
        (p10 == p11 && p11 == p12) || (p11 == p12 && p12 == p13)) 
                  consecutive_char=true;
        
        if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ' || 
        p11 == ' ' || p12 == ' ' || p13 == ' ')
                  spaces=true;       
         }  
                
         else if(len==14){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z') || (p11>='A' && p11<='Z') || (p12>='a' && p12<='z') ||
           (p13>='a' && p13<='z') || (p14>='a' && p14<='z')) 
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z') || (p11>='a' && p11<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')||(p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9') || (p10>='0' && p10<='9') || (p11>='0' && p11<='9')) 
                    digit = true; 
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*' ||
         p11=='@' || p11=='#' || p11=='$' || p11=='%' || p11=='&' || p11=='*'  ) 
                  special_char = true;
                  
         if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10) || (p9 == p10 && p10 == p11) || 
        (p10 == p11 && p11 == p12) || (p11 == p12 && p12 == p13) || (p12 == p13 && p13 == p14)) 
                 consecutive_char=true;
        if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ' || 
        p11 == ' ' || p12 == ' ' || p13 == ' ' || p14 == ' ')
                    spaces=true;
        } 
                
         else if(len==15){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z') || (p11>='A' && p11<='Z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z') || (p11>='a' && p11<='z') || (p12>='a' && p12<='z') ||
           (p13>='a' && p13<='z') || (p14>='a' && p14<='z') || (p15>='a' && p15<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
           (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')|| (p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
           (p9>='0' && p9<='9') || (p10>='0' && p10<='9') || (p11>='0' && p11<='9') || (p12>='0' && p12<='9') ||
           (p13>='0' && p13<='9') || (p14>='0' && p14<='9') || (p15>='0' && p15<='9')) 
                    digit = true; 
                
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*' ||
         p11=='@' || p11=='#' || p11=='$' || p11=='%' || p11=='&' || p11=='*' ||
         p12=='@' || p12=='#' || p12=='$' || p12=='%' || p12=='&' || p12=='*' ||
         p13=='@' || p13=='#' || p13=='$' || p13=='%' || p13=='&' || p13=='*' ||
         p14=='@' || p14=='#' || p14=='$' || p14=='%' || p14=='&' || p14=='*' ||
         p15=='@' || p15=='#' || p15=='$' || p15=='%' || p15=='&' || p15=='*' ) 
                  special_char = true;
                  
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10) || (p9 == p10 && p10 == p11) || 
        (p10 == p11 && p11 == p12) || (p11 == p12 && p12 == p13) || (p12 == p13 && p13 == p14) || 
        (p13 == p14 && p14 == p15)) 
                  consecutive_char=true;
            
       if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ' || 
        p11 == ' ' || p12 == ' ' || p13 == ' ' || p14 == ' ' || p15 == ' ')
                spaces=true;
        
             }  
                
       else if(len==16){
        if((p1>='A' && p1<='Z') || (p2>='A' && p2<='Z') || (p3>='A' && p3<='Z') || (p4>='A' && p4<='Z') ||
          (p5>='A' && p5<='Z') || (p6>='A' && p6<= 'Z')||(p7>='A' && p7<='Z') || (p8>='A' && p8<='Z') ||
          (p9>='A' && p9<='Z') || (p10>='A' && p10<='Z') || (p11>='A' && p11<='Z') || (p12>='A' && p12<='Z') ||
          (p13>='A' && p13<='Z') || (p14>='A' && p14<='Z') || (p15>='A' && p15<='Z') || (p16>='A' && p16<='Z'))
                    uppercase_letter = true;
        
        if((p1>='a' && p1<='z') || (p2>='a' && p2<='z') || (p3>='a' && p3<='z') || (p4>='a' && p4<='z') ||
           (p5>='a' && p5<='z') || (p6>='a' && p6<='z') || (p7>='a' && p7<='z') || (p8>='a' && p8<='z') || 
           (p9>='a' && p9<='z') || (p10>='a' && p10<='z') || (p11>='a' && p11<='z') || (p12>='a' && p12<='z') ||
           (p13>='a' && p13<='z') || (p14>='a' && p14<='z') || (p15>='a' && p15<='z') || (p16>='a' && p16<='z')) 
                    lowercase_letter = true;
                    
        if((p1>='0' && p1<='9') || (p2>='0' && p2<='9') || (p3>='0' && p3<='9') || (p4>='0' && p4<='9') ||
         (p5>='0' && p5<='9') || (p6>='0' && p6<= '9')|| (p7>='0' && p7<='9') || (p8>='0' && p8<='9') || 
         (p9>='0' && p9<='9') || (p10>='0' && p10<='9') || (p11>='0' && p11<='9') || (p12>='0' && p12<='9') ||
         (p13>='0' && p13<='9') || (p14>='0' && p14<='9') || (p15>='0' && p15<='9') || (p16>='0' && p16<='9')) 
                    digit=true; 
      
         if(p1=='@' || p1=='#' || p1=='$' || p1=='%' || p1=='&' || p1=='*' || 
         p2=='@' || p2=='#' || p2=='$' || p2=='%' || p2=='&' || p2=='*' ||
         p3=='@' || p3=='#' || p3=='$' || p3=='%' || p3=='&' || p3=='*' ||
         p4=='@' || p4=='#' || p4=='$' || p4=='%' || p4=='&' || p4=='*' ||
         p5=='@' || p5=='#' || p5=='$' || p5=='%' || p5=='&' || p5=='*' ||
         p6=='@' || p6=='#' || p6=='$' || p6=='%' || p6=='&' || p6=='*' ||
         p7=='@' || p7=='#' || p7=='$' || p7=='%' || p7=='&' || p7=='*' ||
         p8=='@' || p8=='#' || p8=='$' || p8=='%' || p8=='&' || p8=='*' ||
         p9=='@' || p9=='#' || p9=='$' || p9=='%' || p9=='&' || p9=='*' ||
         p10=='@' || p10=='#' || p10=='$' || p10=='%' || p10=='&' || p10=='*' ||
         p11=='@' || p11=='#' || p11=='$' || p11=='%' || p11=='&' || p11=='*' ||
         p12=='@' || p12=='#' || p12=='$' || p12=='%' || p12=='&' || p12=='*' ||
         p13=='@' || p13=='#' || p13=='$' || p13=='%' || p13=='&' || p13=='*' ||
         p14=='@' || p14=='#' || p14=='$' || p14=='%' || p14=='&' || p14=='*' ||
         p15=='@' || p15=='#' || p15=='$' || p15=='%' || p15=='&' || p15=='*' ||
         p16=='@' || p16=='#' || p16=='$' || p16=='%' || p16=='&' || p16=='*') 
                  special_char = true;
          
        if ((p1 == p2 && p2 == p3) || (p2 == p3 && p3 == p4) || (p3 == p4 && p4 == p5) || 
        (p4 == p5 && p5 == p6) || (p5 == p6 && p6 == p7) || (p6 == p7 && p7 == p8) || 
        (p7 == p8 && p8 == p9) || (p8 == p9 && p9 == p10) || (p9 == p10 && p10 == p11) || 
        (p10 == p11 && p11 == p12) || (p11 == p12 && p12 == p13) || (p12 == p13 && p13 == p14) || 
        (p13 == p14 && p14 == p15) || (p14 == p15 && p15 == p16)) 
                 consecutive_char=true;
         
        if (p1 == ' ' || p2 == ' ' || p3 == ' ' || p4 == ' ' || p5 == ' ' || 
        p6 == ' ' || p7 == ' ' || p8 == ' ' || p9 == ' ' || p10 == ' ' || 
        p11 == ' ' || p12 == ' ' || p13 == ' ' || p14 == ' ' || p15 == ' ' || p16 == ' ')
                  spaces=true; 
             }                      
                
    if(!(p1>='A' && p1<='Z'))
    cout<<"\nError! First character must be an UPPERCASE letter.";
     
    if(!(last_char>=0 && last_char<=9))
    cout<<"\nError! the last character of password must be a digit. ";

    if(p1==last_char)
         cout<<"\nError! Password should must start and end with a different charater.";
           
        if (!lowercase_letter) 
            cout << "\nError! Password must contain at least one lowercase letter.";
        if (!uppercase_letter) 
            cout <<"\nError! Password must contain at least one uppercase letter." << endl;
        if (!digit) 
            cout << "\nError! Password must contain at least one digit." << endl;
        if (!special_char) 
            cout << "\nError! Password must contain at least one special character (@, #, $, %, &, *)." << endl;
        if (spaces)
            cout<< "\nError! Password should not contain blank spaces.";
         if (consecutive_char)
            cout << "\nError! Password cannot contain three consecutive identical characters.";   
            }
        if( lowercase_letter && uppercase_letter && digit && special_char && (!spaces) && (!consecutive_char))
          cout << "\nSuccess: Password is valid!" << endl;
  
            return 0;
            }
/*this logic could also be used:
cin>>p1;
if(p1=='?'){
  p2=' ',p3=' ',p4=' ',p5=' ',p6=' ',p7=' ',p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
  }
else{
len++;  
cin>>p2;
    if(p2=='?'){
        p3=' ',p4=' ',p5=' ',p6=' ',p7=' ',p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
        last_char=p1;
    }
    else{
    len++;
    cin>>p3;
        if(p3=='?'){
            p4=' ',p5=' ',p6=' ',p7=' ',p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
            last_char=p2;
        }
        else{
        len++;
        cin>>p4;
            if(p4=='?'){
                p5=' ',p6=' ',p7=' ',p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                last_char=p3;
            }
            else{
            len++;
            cin>>p5;
                if(p5=='?'){
                    p6=' ',p7=' ',p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                    last_char=p4;
                }
                else{
                len++;
                cin>>p6;
                    if(p6=='?'){
                        p7=' ',p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                        last_char=p5;
                     }
                    else{
                    len++;
                    cin>>p7;
                        if(p7=='?'){
                            p8=' ',p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                            last_char=p6;
                        }
                        else{
                        len++;
                        cin>>p8;
                            if(p8=='?'){
                                p9=' ',p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                                last_char=p7;
                             }
                             else{
                             len++;
                             cin>>p9;
                                 if(p9=='?'){
                                      p10=' ',p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                                      last_char=p8;
                                  } 
                                 else{
                                 len++;
                                 cin>>p10;
                                     if(p10=='?'){
                                          p11=' ',p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                                          last_char=p9;
                                      }
                                      else{
                                      len++;
                                      cin>>p11;
                                          if(p11=='?'){
                                              p12=' ',p13=' ',p14=' ',p15=' ',p16=' ';
                                              last_char=p10;
                                          }
                                          else{
                                         len++;
                                         cin>>p12;
                                             if(p12=='?'){
                                                  p13=' ',p14=' ',p15=' ',p16=' ';
                                                  last_char=p11;
                                              }
                                              else{
                                              len++;
                                              cin>>p13;
                                                  if(p13=='?'){
                                                      p14=' ',p15=' ',p16=' ';
                                                      last_char=p12;
                                                  }   
                                                  else{
                                                  len++;
                                                  cin>>p14;
                                                      if(p14=='?'){
                                                          p15=' ',p16=' ';
                                                          last_char=p13;
                                                      }   
                                                      else{
                                                     len++;
                                                     cin>>p15;
                                                           if(p15=='?'){
                                                             p16=' ';
                                                             last_char=p14;}
                                                    
                                                         else{
                                                          last_char=p15;
                                                          len++;
                                                          cin>>p16;
                                                              if(p16=='?')
                                                              last_char=p15;
                                                              else{
                                                              last_char=p16;
                                                              len++;}
    }}}}}}}}}}}}}}} */
