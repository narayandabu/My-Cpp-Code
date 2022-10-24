#include <iostream>

using namespace std;

template <typename Any>
class stack
{
private:
    int size;
    int arrow = -1;
    Any *arr; 
public:
    stack(int size){ // Constructor
        this->size = size;
        this->arr = new Any(size * sizeof(Any));
    }
    stack(string instruction){ //constructor with size 100 and help option
        if(instruction=="default")
        {
            this->size=100;
        }
        else if (instruction=="help")
        {
            
        }
        else
        {
            cout<<"Wrong instruction or command given. please type stack<datatype>VARIABLENAME(\"help\") for help."<<endl;
        }  
    }
    stack(){ // default contructor with size 100.
        cout<<"""WARNING !!!"" Default Stack Size 100 is used.. please mention a size in () to make"<<endl;
        cout<<"a custom stack."<<"To turn off this message use stack<datatype>name(\"default\") instead."<<endl;   
        this->size=100;
    }
    void push(Any data){ // pushes the data to the top element of the stack
        if (arrow < (size - 1))
        {
            arr[(arrow + 1)] = data;
            arrow++;
        }
        else
        {
            cout << "Cannot Push(StackOverflow) " << endl;
        }
    }
    Any pop(){ // pops out the top element of the stack
        if(arrow >= 0)
        {
            Any temp=arr[arrow];
            arr[arrow] = 0;
            arrow--;
            return temp;
        }
        else
        {
            Any m=1;
            return m;
        }
    }
    void peek_all(){ // prints all the elements of the stack.
        if (arrow >= 0)
        {
            for (int i = 0; i <= arrow; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else if (arrow == -1)
        {
            cout << "Cannot Print an Empty Stack";
        }
    }
    int is_full(){ // checks if the stack is full or not.
        if (arrow == (size - 1))
        {
            cout << "stack is full." << endl;

            return 1;
        }
        else
        {
            cout << "stack is not full." << endl;
            return 0;
        }
    }
    int is_empty(){ // checks if the stack is empty or not
        if (arrow == (-1))
        {
            cout << "stack is empty." << endl;

            return 1;
        }
        else
        {
            cout << "stack is not empty." << endl;
            return 0;
        }
    }
    void peek_to(int peek_to_element){ // peeks to a particular index value in the stack
        if ((peek_to_element > 0) and (arrow >= 0) and (peek_to_element <= (arrow + 1)))
        {
            cout << arr[peek_to_element - 1] << endl;
        }
        else
        {
            cout << "Out Of Scope" << endl;
        }
    }
    void flush(){ // feels the entrie stack with 0s.
        for (int i = 0; i < (size - 1); i++)
        {
            arr[i] = 0;
        }
        arrow = -1;
    }
    int search(Any data){ // searches for the given data.
        for (int i = 0; i <= arrow; i++)
        {
            if (arr[i] == data)
            {
                return i + 1;
            }
        }
        cout << "Not Found!" << endl;
        return 0;
    }
    Any stacktop(){ // returns the top value of the stack.
        return arr[arrow];
    }
    Any stackbottom(){ // returns the bottom value of the stack.
        return arr[0];
    }
    int sos(){ // returns the size of stack 
        return size;
    }
    int sosused(){ //returns the size of the stack used 
        return arrow+1;
    }

};

