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

       cin >> infix;
       stack<char> s(30);
       char postfix[infix.length()-1];
       int i = 0;
       int j = 0;
       int count=0;
       s.push('n');
       for (int k = 0; k != infix.length(); k++)
       {
              if(isprecedence(infix.at(i)) > 0 and isprecedence(s.stacktop()) < isprecedence(infix.at(i)))
              {
                     cout<<"pushed"<<endl;
                     s.push(infix.at(i));
                     i++;
                     count++;
                     continue;
              }
              else if (isprecedence(infix.at(i))==0)
              {
                     cout<<"normal"<<endl;
                     postfix[j] = infix.at(i);
                     j++;
                     i++;
                     continue;                    
              }
              if(isprecedence(s.stacktop()) > isprecedence(infix.at(i)))
              {
                     cout<<"poped"<<endl;
                     postfix[j]=s.pop();
                     j++;
                     count--;
                     continue;
              }   
       }
       if (count>0)
       {
              cout<<"poped"<<endl<<count<<endl;
              while (count!=0)
              {
                     postfix[j]=s.pop();  
                     j++;
                     count--;
              }
              
              
              
       }
       
       for (int k = 0; k < infix.length(); k++)
       {
              cout<<postfix[k];
       }
       

       return 0;
}