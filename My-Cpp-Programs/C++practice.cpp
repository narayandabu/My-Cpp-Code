#include <iostream>
#include <cmath>

using namespace std;

void function1 (int num){ //***************printing tables***************

    
    for (int i = 0; i <=10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
    }
}

int function2(int size, int  arr[]){ //************max number in an array************
    int max=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }  
    }
    return max;
}
      
string function3 (int num){ //************if number is prime or not****************

    for (int i = 2; i < num; i++)
    {
        if ((num%i)==0)
        {
            return "composite";
        }
        
    }
    return "prime";
    
}
       
string altfunction3(int num){ //**********alternate to finding if number is prime or not************
        int a=sqrt(num);
        for (int i = 2; i < a; i++)
        {
            if (num%i==0)
            {
                return "composite";
            } 
        }
        return "prime";
}

void function4(int data){ // ************* decimal to binary ****************
    int rem,i=0;
    int a[10];
    if (data==0)
    {
        cout<<"0"<<endl;
    }
    while(data !=0 )
    {
        rem=data%2;
        data=data/2;
        a[i]=rem;
        i++;
    }
    
    for (int j = i-1; j >= 0; j--)
    {
        cout<<a[j];
    }
}

void function5(int input){  // *************** Reverse A Number ***************

    int input1=input;
    int count = 0;
    while (true)
    {
        if (input1==0)
        {
            break;
        }
        else
        {
            count++;
            input1=input1/10;
        }    
    }
    // cout<<count<<endl;
    int finl=0;
    int i = count;
    int rem=0;
    for ( i >= 1; i--;){
     rem = input%10;
     input=(input/10);
     finl = finl + (rem * pow(10,(i))); 
    }
    cout<<finl<<endl;

}

void function6(int input1,int input2){  //************ Prime Number in a Given Range ***********

    for (int i = input1; i <= input2; i++)
    {
        int counter=0;
        int a=sqrt(i);
        for (int j = 2; j <= a; j++)
        {
            if (i%j==0)
            {
               counter++;
               continue;
            }
               
        }
            if (counter==0)
             {
             cout<<i<<" ";
             }  
        
        
        
    }
    

}
int main(){
    return 0;
}


