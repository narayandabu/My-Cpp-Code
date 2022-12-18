#include <iostream>

using namespace std;


template <class Any>
class Binary_Tree{

    protected:
        Any data;
        Binary_Tree * left=NULL;
        Binary_Tree * right=NULL;
    public:
        Binary_Tree(Any data){
            Any * node = new Any;
            this->data=data;
        }
        void link_left(Binary_Tree*left){
            this->left=left;
        }
        void link_right(Binary_Tree*right){
            this->right=right;
        }
        void preorder(Binary_Tree*root){
           if(root!= NULL){
            cout<<root->data<<" ";
            preorder(root->left);
            preorder(root->right);
        }
           return;
        }
        void postorder(Binary_Tree*root){
            if(root!= NULL){
                postorder(root->left);
                postorder(root->right);
                cout<<root->data<<" ";
            }
            return;
        }
        void inorder(Binary_Tree*root){
            if(root!= NULL){
                inorder(root->left);
                cout<<root->data<<" ";
                inorder(root->right);
            }
            return;

        }

};



int main (){       
    Binary_Tree<int> root(4);
    Binary_Tree<int> rootl(42);
    Binary_Tree<int> rootr(67);
    Binary_Tree<int> rootl1(89);
    Binary_Tree<int> rootr1(56);
    root.link_left(&rootl);
    root.link_right(&rootr);
    rootl.link_left(&rootl1);
    rootl.link_right(&rootr1);
    root.preorder(&root);
    cout<<"preorder"<<endl;
    root.postorder(&root);
    cout<<"postorder"<<endl;
    root.inorder(&root);
    cout<<"inorder"<<endl;
    return 0;
}