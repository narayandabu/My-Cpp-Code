#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;


int Welcome(){
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 10);
    cout<<"Press 1 to Register"<<endl;
    cout<<"Press 2 for Login"<<endl;
    cout<<"Press 3 to exit"<<endl;
    cout<<"What Do You Want to Do (1,2,3)?? :- ";
    int CMD;
    cin>>CMD;
    return CMD;
}



int main()
{
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 12);
    cout<<"                    ########## WELCOME TO \"USER LOGIN\" ########## "<<endl;
    cout<<"|------------------------------------------------------------------|"<<endl;
    cout<<"|             _________   ______________     ________              |"<<endl;
    cout<<"|  |         |         |  |             |        |      |\\       ||"<<endl;
    cout<<"|  |         |         |  |             |        |      | \\      ||"<<endl;
    cout<<"|  |         |         |  |                      |      |  \\     ||"<<endl;
    cout<<"|  |         |         |  |                      |      |   \\    ||"<<endl;
    cout<<"|  |         |         |  |     _______          |      |    \\   ||"<<endl;
    cout<<"|  |         |         |  |     |     |          |      |     \\  ||"<<endl;
    cout<<"|  |         |         |  |     |     |          |      |      \\ ||"<<endl;
    cout<<"|  |________ |_________|  |_____|     |      ____|_____ |       \\||"<<endl;
    cout<<"|                                                                  |"<<endl;
    cout<<"|------------------------------------------------------------------|"<<endl;

while (true){
    int command = Welcome();
    string id;
    string pswd;
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 15);
    
    if (command==1)
    {
        HANDLE console_color;
        console_color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(console_color, 11);
        ofstream fileinput;
        fileinput.open("IDPassword.txt");
        cout<<"Enter Your New ID :- ";
        cin>>id;
        cout<<"Enter Your New Password :- ";
        cin>>pswd;
        fileinput<<id<<endl<<pswd;
        fileinput.close();
        continue;        
    }
    else if (command==2)
    {
        int c;
        ifstream fileoutput;
        fileoutput.open("IDPassword.txt");
        cout<<"Enter Your ID :- ";
        cin>>id;
        cout<<"Enter Your Password :- ";
        cin>>pswd;
        string ID;
        string PSWD;
        getline(fileoutput,ID);
        getline(fileoutput,PSWD);
        if (id==ID and pswd==PSWD)
        {
            HANDLE console_color;
            console_color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console_color, 9);
            cout <<"                ########## YOU ARE RIGHT THANK YOU ########## "<<endl;
        }
        else{
            HANDLE console_color;
            console_color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(console_color, 9);
            cout<<"Wrong ID or Password !"<<endl;
        }
        fileoutput.close();
        cout<<"               Type Something to exit !"<<endl;
        cin>>c;
        break;
        
    }
    else if (command==3)
    {
        HANDLE console_color;
        console_color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(console_color, 13);
        cout<<"                 ********* 'Thank You' ********"<<endl;
        
        break;
    }
    else{
        HANDLE console_color;
        console_color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(console_color, 15);
        cout<<"Something Went Wrong."<<endl;
        cout<<"Please Try Again."<<endl;
        continue;
    }
}
 return 0;
}
