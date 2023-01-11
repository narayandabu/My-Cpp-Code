#include <iostream>
using namespace std;

//Linked List

template <typename Any>
class Linkedlist{
	public:
    Any data;
    Linkedlist * ptr;
    Linkedlist * ptrprev;
    Linkedlist(){
        data=0;
        ptr=NULL;
    }
    Linkedlist(Any data,Linkedlist * ptr){
		this-> data=data;
        this-> ptr=ptr;
    }
    void Linkedlisttraversal(Linkedlist * traverseptr){
       while((traverseptr->ptr)!=NULL){
            cout<<(traverseptr->data)<<" ";
            traverseptr=(traverseptr->ptr);
        }
        cout<<(traverseptr->data)<<endl;
    }
    void push_new_data(Any data){
        Linkedlist * newnode = new Linkedlist(data,this->ptr);
        this->ptr=(newnode);
    }
};
template <typename Any>
int get_data(Linkedlist<Any>*headptr,Any data){
    int i=0;
    while((headptr->ptr)!=NULL){
        i++;
        if ((headptr->data)==data){
            cout<<"Serial Number:- "<<i<<endl;
            return 0;
            break;
        }
        else{
        headptr=(headptr->ptr);        
        }
    }
    if ((headptr->data)==data){
        i++;
        cout<<"Serial Number:- "<<i<<endl;
        return 0;
    }
    else{
        cout<<"No Value Found"<<endl;
        return -1;
    }
}



