#include <iostream>

using namespace std;


template <class Any>
class Binary_Tree{
    protected:
        Any data;
        Binary_Tree * left=NULL;
        Binary_Tree * right=NULL;
    public:
        
        Binary_Tree(Any data){ // Default Constructor. 
            Any * node = new Any;
            this->data=data;
        }
        void link_left(Binary_Tree*left){ // To Link Left sub BT.
            this->left=left;
        }
        void link_right(Binary_Tree*right){ // To Link Right subBT.
            this->right=right;
        }
        void preorder(Binary_Tree*root){ // To Perform preorder traversal.
           if(root!= NULL){
            cout<<root->data<<" ";
            preorder(root->left);
            preorder(root->right);
        }
           return;
        }
        void postorder(Binary_Tree*root){ // To Perform postorder traversal.
            if(root!= NULL){
                postorder(root->left);
                postorder(root->right);
                cout<<root->data<<" ";
            }
            return;
        }
        void inorder(Binary_Tree*root){ // To Perform inorder traversal.
            if(root!= NULL){
                inorder(root->left);
                cout<<root->data<<" ";
                inorder(root->right);
            }
            return;

        }
        bool isBST(Binary_Tree*root){ // To Check if a BT is a BST.
        if (root == NULL)return true;
        if (root->left != NULL && root->left->data > root->data)
            return false;
        if (root->right != NULL && root->right->data < root->data)
            return false;
        if (!isBST(root->left) || !isBST(root->right))
            return false;
        return true;
        }
        Any getdata(Binary_Tree* root){ // Returns the data in the node.
            return root->data;   
        }
        Binary_Tree * bstsearchrecu(Binary_Tree *root, Any key){ // BS in BST recursively.
            if (root==NULL){
                return NULL;
            }
            if (key==root->data)
            {
                return root;
            }
            else if (key<root->data)
            {
                return bstsearchrecu(root->left,key);
            }
            else
            {
                return bstsearchrecu(root->right,key);
            }  
        }
        Binary_Tree * bstsearchiter(Binary_Tree *root, Any key){ // BS in BST iteratively. 
            while (root!=NULL){
                if(root->data==key){
                    return root;
                }
                else if(root->data>key){
                    root=root->left;
                }
                else{
                    root=root->right;
                }
            }
            return NULL;
        }
        void sresult(Binary_Tree * root,Any key, char type){ // Returns if the element is found or not.
           if(type=='r'){ 
                if((root->bstsearchrecu(root,key))==NULL)
                {
                    cout<<"Element not found"<<endl;
                }
                else
                {
                     cout<<"Element found"<<endl;
                }
           }
           else if (type=='i')
           {
                if((root->bstsearchiter(root,key))==NULL)
                {
                    cout<<"Element not found"<<endl;
                }
                else
                {
                     cout<<"Element found"<<endl;
                }
           }
           else
           {
            cout<<"Select a Particular Mode 'i' or 'r' ."<<endl;
           }
        }
        void insert_in_BST(Binary_Tree*root,Any key){ // Inserts a number in BST at its proper Place.
            Binary_Tree * prev = NULL;
            while (root!=NULL){
                prev=root;
                if (key==root->data)
                {
                    cout<<"Cannot insert "<<key<<" ,already in BST."<<endl;
                    return;
                }
                else if (key<(root->data))
                {
                    root=root->left;
                }
                else
                {
                    root=root->right;
                }
            }
            Binary_Tree * newbt = new Binary_Tree (key);
            if (key<prev->data)
            {
                prev->link_left(newbt);
            }
            else
            {
                prev->link_right(newbt);
            }
        }
        Binary_Tree * inorderpredecesor(Binary_Tree*root){
            root=root->left;
            while(root->right != NULL){
                root =root->right;
            }
            return root;
        }
        Binary_Tree * delete_in_BST(Binary_Tree*root,Any key){
           Binary_Tree * ipre;
           if(root==NULL){
                return NULL;
           }
           else if (root->left==NULL and root->right==NULL){
                root=NULL;
                delete root;
                // cout<<"deleted"<<endl;
                return NULL;
           }
           if(key<root->data){
            root->left=delete_in_BST(root->left,key);
           }
           else if(key>root->data){
            root->right=delete_in_BST(root->right,key);
           }
           else{
               ipre = inorderpredecesor(root);
               root->data = ipre->data;
               root->left = delete_in_BST(root->left,ipre->data);
           }
           return root;
        }
 

};



int main (){       
    // Making Binary tree...
    
    // Normal Random BT
    // Binary_Tree<int> root(4);                       
    // Binary_Tree<int> rootl(42);                     
    // Binary_Tree<int> rootr(67);
    // Binary_Tree<int> rootl1(89);
    // Binary_Tree<int> rootr1(56);

    // For a  BST
    Binary_Tree<int> root(10);                       
    Binary_Tree<int> rootl(7);                     
    Binary_Tree<int> rootr(20);
    Binary_Tree<int> rootl1(3);
    Binary_Tree<int> rootr1(8);
    
    /*  
            Representation of the BSt

                    (10)
                    /   \
                  (7)   (20)
                  / \   /  \
                (3) (8) 
                / \ / \
                
                
    
    */




    /*  
            
          Representation of the Binary Tree...
                   
                   (4)
                   / \
                 (42)(67)   
                 / \ 
               (89)(56)
    */


    // Linking...

    root.link_left(&rootl);
    root.link_right(&rootr);
    rootl.link_left(&rootl1);
    rootl.link_right(&rootr1);


    // Functions Call...


    // root.preorder(&root);
    // cout<<"preorder"<<endl;
    // root.postorder(&root);
    // cout<<"postorder"<<endl;
    // root.insert_in_BST(&root,19);
    root.inorder(&root);
    cout<<"inorder"<<endl;
    root.delete_in_BST(&root,10);
    root.inorder(&root);
    cout<<"inorder"<<endl;
    // cout<<root.isBST(&root)<<endl;
    // root.sresult(&root,7,'r');     
    // root.sresult(&root,19,'i');
    // cout<<root.getdata(root.bstsearchrecu(&root,89))<<endl;
    // cout<<root.getdata(root.bstsearchiter(&root,10))<<endl;

    

    return 0;
}