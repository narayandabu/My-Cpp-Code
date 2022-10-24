#include <iostream>

using namespace std;

template <typename Any>
class node
{
public:
    Any data;
    node *next;
    node(Any data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <typename Any>
class stack
{
public:
    int size;
    node<Any> *top;
    stack(int size)   //constructor
    {
        this->size=size;
        top = NULL;
    } 
    stack(){  //default constructor
        cout<<"Please mention a size"<<endl;
        size=-1;
    }
    int is_empty(){  //Checks if the stack is empty.
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return 1;
        }
    }
    int is_full(){   //Checks if the stack is full.
        if (size <= 0)
        {
            cout << "Stack is full ! " << endl;
            return 1;
        }
        else
            cout << "Not full ! " << endl;
        return 0;
    }
    void push(Any data){  // Pushes an element into the stack.  
        if (size > 0)
        {
            node<Any> *temporary = new node<Any>(sizeof(node<Any>));
            temporary->data = data;
            temporary->next = top;
            top = temporary;
            size--;
            cout<<"inseted"<<endl;
        }
        else
        {
            cout << "stack Overflow" << endl;
        }
    }
    void pop(){  //pops out the top element.
        node<Any> * to_be_deleted = top;
        top = (top->next);
        cout<<to_be_deleted->data<<" poped "<<endl;
        free(to_be_deleted);
    }
    int peek(){  //peeks the top element if any.
        if (size>=0)
        {
            cout<<top->data<<" is at top"<<endl;
            return 0;
        }
        else{
            cout<<"No element found"<<endl;
            return 1;
        }
        
    }
    void peek_all(){  //Prints entire stack elements.
        node<Any> * dummy;
        if (top==NULL)
        {
            cout<<"Stack Overflow !"<<endl;
        }
        else
        {
            dummy=top;
            while (dummy!=NULL)
            {
                cout<<dummy->data<<endl;
                dummy=dummy->next;
                if (dummy != NULL){
                cout << " | "<<endl;
                cout << "\\ / "<<endl;
                cout << " | "<<endl;
                }
                else if (dummy == NULL)
                {
                    cout << " | "<<endl;
                    cout << "\\ / "<<endl;
                    cout << " | "<<endl;
                    cout<<  "NULL" <<endl;
                }
                
            }
            
        }
        
        
    }
};

int main()
{
        stack<int> s;
        s.push(3);
    return 0;
}