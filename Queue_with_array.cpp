#include <iostream>

using namespace std;

// Queue with arrays.

template <class Any>
class Queue{
   protected:
    int size;
    int fend=-1;
    int bend=-1;
   public:
    Any * arr;
    Queue(int size){ // Basic Constructor For Queue Class 
        this->size=size;
        arr = new Any[size]; 
    }
    void Qinsert(Any data){ // Function to insert an Element in the Queue 
       if (bend<(size-1)){
         bend++;
         arr[bend] = data;
       }
       else
       {
        cout<<"Cannot insert an element to a full Queue."<<endl;
       }      
    }
    void Qdelete(){ // Function to delete an Element in the the Queue 
        arr[fend+1]=0;
        fend++;
    }
    int Qis_full(){ // Function that returns 0 if Queue is full else -1 
        if (bend==(size-1))
        {
            return 0;
        }
        else
        {
            return -1;
        }  
    }
    int Qis_empty(){ // Function that returns 0 if Queue is empty else -1 
        if (bend==fend)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    void Qreset(){ // Function that resets the entire Queue 
        delete arr;
        arr = new Any[size];
        fend=-1;
        bend=-1;
    }
    int Qdeleted(){ // Function that returns the number of elements deleted 
        return (fend+1);
    }
    Any peek(){ // Function that returns the first element in the queue 
        if (bend>=0)
        {
            return arr[bend];
        }
        else
        {
            return -1;
        }
        
    }
    void freeQ(){ // Function that frees the entire Queue and the allocated memory can used again 
        free(arr);
    }


};

int main()
{
    Queue <int> Q(5);
    return 0;
}
