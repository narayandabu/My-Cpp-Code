#include <iostream>
#include "My-Cpp-Code/stackpractice.cpp"
#include <string.h>

using namespace std;

int isprecedence(char data)
{
       if (data == '*' or data == '/')
       {
              return 2;
       }
       else if (data == '+' or data == '-')
       {
              return 1;
       }
       else
       {
              return 0;
       }
}

int main()
{ 
       string infix;
       cin>>infix;
       string postfix;
       stack<char> operatore(10);
       int j=0;
       for(int i = 0; i < infix.length();i++){
              int check=isprecedence(infix.at(i));
              if(check==0){
                postfix=postfix+infix.at(i);
                j++;
              }
              else if(check==1 and operatore.stacktop() == -1){
                    operatore.push(infix.at(i));
                    j++;
              }
              else if(check==(1 or 2) and operatore.stacktop() > -1 ){
                    postfix=postfix+operatore.pop();
                    operatore.push(infix.at(i));
                    j++;
              }
              else if(check==2 and isprecedence(operatore.stacktop())<=1){
                    operatore.push(infix.at(i));
                    j++;  
              }
              else{
                     postfix=postfix+operatore.pop();
              }
                     
       }
       if(operatore.stacktop() > -1){
              for (int i = 0; i <= operatore.sosused(); i++){
                     postfix=postfix+operatore.pop();
                }
                
       }
       cout<<postfix;
       
       

       return 0;
}