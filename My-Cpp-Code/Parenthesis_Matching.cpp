/*
-> This Uses my created version of stackwitharray data structure only. 
-> The file is available in github "https://github.com/narayandabu/My-Cpp-Code".
-> This file can be used for multiple Parenthesis as well and returns if the expression 
   is balanced or not.
*/
#include <iostream>
#include "stackwitharray.cpp"
#include <string.h>
using namespace std;

int main (){
        stack<char> t(50);
        string input;
        cin>>input;
        int count=0;
        for (int i = 0; i < input.size() ; i++){
            if (input.at(i)=='(')
            {
                t.push('(');
                count++;
            }
            else if (input.at(i)=='{')
            {
                t.push('{');
                count++;
            }
            else if (input.at(i)=='[')
            {
                t.push('[');
                count++;
            }
            
            else if (input.at(i)==')' or input.at(i)=='}' or input.at(i)==']' )
            {
                
                if (t.sosused()==0)
                {
                    count++;
                    break;
                }
                else 
                {
                    char tempin=input.at(i);
                    char pop = t.pop();
                    if (tempin==')' and pop=='(')
                    {
                        count--;
                    }
                    else if (tempin=='}' and pop=='{')
                    {
                        count--;    
                    }
                    else if (tempin==']' and pop=='[' )
                    {
                        count--;
                    }
                    else
                    {
                        count++;
                        break;
                    }             
                }
            }
            else continue; 
        }
        if (count==0)
        {
            cout<<" Balanced "<<endl;
        }
        else cout<<" Not Balanced "<<endl;
       return 0;
}   
