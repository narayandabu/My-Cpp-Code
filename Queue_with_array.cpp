#include <iostream>


using namespace std;

// Queue with arrays.

template <class Any>
class Queue{
   protected:
    int size;
    int fend=-1;
    int bend=-1;
    Any * arr;
   public:
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
    Any * traverse(){ // returns the top element of the queue to traverse
        return arr ;
    }


};

template <class Any>
class CQueue{
    protected:
    int size;
    int fend=-1;
    int bend=-1;
    int count=0;
    Any * arr;
    public:
    CQueue(int size){ 
        this->size=size;
        arr = new Any[size]; 
    }
    int CQis_full(){
        // cout<<"fend "<<fend<<" bend "<<bend<<endl;
        if(fend==0 and ((bend+1)%(size))==0)
        {
            return 1;
        }
        else
        {
            return 0;
        } 
    }
    int CQis_empty(){
        if(fend==-1 and bend==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void CQinsert(Any data){ // Function to insert an Element in the Queue 
       if(((bend+1)%(size))==fend){
        cout<<"Cannot Insert if the Queue is already filled."<<endl;
       }
       else{
        bend=((bend+1)%size);
        arr[bend]=data;
        if(fend==-1)
        {
            fend=0;
        }
        count++;
       }      
    }
    Any CQdelete(){ 
        if(fend==-1 and bend==-1)
        {
            cout<<"cannot delete if the Queue is already empty"<<endl;
            return -256;
        }
       
        else
        {
            Any removed=arr[fend];
            arr[fend]=0;
            fend++;
            if(fend==size){
                fend=-1;
                bend=-1;
            }
            count--;
            return removed;
        }
    }
    void CQtraverse(){ 
        if (CQis_empty()==1)
        {
            cout<<"Cannot traverse an empty Queue."<<endl;
        }
        else
        {
            for(int i = fend; i <= bend; i++){
                cout<<(i+1)<<" ";
                cout<<(arr[i])<<endl;
            }
        }
    }

};










int main()
{
    CQueue<int> Q(6);
   
    Q.CQinsert(10);
    Q.CQinsert(101);
    Q.CQinsert(110);
    Q.CQinsert(1900);
    Q.CQinsert(1155);
    Q.CQinsert(120);
    Q.CQdelete();
    Q.CQdelete();
    Q.CQdelete();
    Q.CQdelete();
    Q.CQdelete();
    Q.CQdelete();
    Q.CQinsert(120);
    Q.CQinsert(120);
    Q.CQinsert(120);
    Q.CQinsert(120);
    Q.CQinsert(120);
    Q.CQinsert(120);




 



    


    Q.CQtraverse();
    cout<<"is_full "<<Q.CQis_full()<<endl;
    cout<<"is_empty "<<Q.CQis_empty()<<endl;
   
    


    return 0;
}
