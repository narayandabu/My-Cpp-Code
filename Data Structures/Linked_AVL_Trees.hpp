#include <iostream>




using namespace std;


template <class Any>
class AVL_Tree{

protected:
    Any data;
    AVL_Tree * left=NULL;
    AVL_Tree * right=NULL;
    int height=0;

public:
    AVL_Tree(Any data){
        height=1;
        this->data=data;
    }
    int getheight(AVL_Tree*node){
        int h = 0;
        if(node != NULL){
            int l_height = getheight(node->left);
            int r_height = getheight(node->right);
            int max_height = max(l_height, r_height);
            h = max_height + 1;
        }
        return h; 
    }
    int getbalancefactor(AVL_Tree*node){
        if (node==NULL){
            return 0;
        }
        return (getheight(node->left)-getheight(node->right));
    }
    AVL_Tree * rr_rotat(AVL_Tree * parent){
        AVL_Tree *temp;
        temp=parent->right;
        parent->right =temp->left;
        temp->left=parent;
        return temp;
    }
    AVL_Tree * ll_rotat(AVL_Tree * parent){
        AVL_Tree *temp;
        temp=parent->left;
        parent->left=temp->right;
        temp->right=parent;
        return temp;
    }
    AVL_Tree * rl_rotat(AVL_Tree * parent){
        AVL_Tree * temp;
        temp= parent->right;
        parent->right=ll_rotat(temp);
        return rr_rotat(parent);

    }
    AVL_Tree * lr_rotat(AVL_Tree * parent){
        AVL_Tree* temp;
        temp = parent->left;
        parent->left=rr_rotat(temp);
        return ll_rotat(parent);
    }


    AVL_Tree * balance(AVL_Tree * node){
        int bal_factor=getbalancefactor(node);
        if(bal_factor > 1){
            if(getbalancefactor(node->left) > 0)
                node = ll_rotat(node);
            else
                node = lr_rotat(node);
            } 
        else if(bal_factor < -1){
            if (getbalancefactor(node->right) > 0)
                node = rl_rotat(node);
            else
                node = rr_rotat(node);
            }
        return node;
    }
    AVL_Tree * insert(AVL_Tree * node,Any key){
        if(node==NULL){
            node=new AVL_Tree(key);
            node->data=key;
            node->left=NULL;
            node->right=NULL;
            return node;
        }
        else if(key<node->data){
            node->left =insert(node->left,key);
            node=balance(node);
        }
        else if(key>node->data){
            node->right=insert(node->right,key);
            node=balance(node);
        }
        return node;
    }
    void preorder(AVL_Tree*root){ // To Perform preorder traversal.
           if(root!= NULL){
            cout<<root->data<<" ";
            preorder(root->left);
            preorder(root->right);
            }
           return;
        }
    void inorder(AVL_Tree*root){ // To Perform inorder traversal.
            if(root!= NULL){
                inorder(root->left);
                cout<<root->data<<" ";
                inorder(root->right);
            }
            return;
        }    
   
};





int main (){

        AVL_Tree<int> root(3);
        root.insert(&root,4);

        
        
        
       return 0;
}