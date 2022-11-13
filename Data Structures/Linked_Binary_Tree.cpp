#include <iostream>

using namespace std;


template <class Any>
class Binary_Tree{

    protected:
        Any data;
        Binary_Tree * left=NULL;
        Binary_Tree * right=NULL;
        Binary_Tree * parent;
    public:
        Binary_Tree(Any data){
            Binary_Tree*bt = new Binary_Tree;
            this->data=data;
        }
        void link_left(Any data,Binary_Tree*left){
            Binary_Tree*btleft = new Binary_Tree;
            btleft->data=data;
        }


};



int main (){
               
       return 0;
}