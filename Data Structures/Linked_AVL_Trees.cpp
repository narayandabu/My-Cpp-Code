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
        if (node != NULL){
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

    
    AVL_Tree * balance(AVL_Tree * node){
        int bal_factor=getbalancefactor(node);
         if (bal_factor > 1) {
      if (difference(t->l) > 0)
         t = ll_rotat(t);
      else
         t = lr_rotat(t);
   } else if (bal_factor < -1) {
      if (difference(t->r) > 0)
         t = rl_rotat(t);
      else
         t = rr_rotat(t);
   }
   return t;

    }
    AVL_Tree * insert(AVL_Tree * node,Any key){
        if (node==NULL){
            node=new AVL_Tree;
            node->data=key;
            return node;
        }
        if (key<node->data){
            node->left =insert(node->left,key);
        }
        else if (key>node->data){
            node->right=insert(node->right,key);
        }
        node->height = 1 + max(getheight(node->left),getheight(node->right));
        int BF= getbalancefactor(node);

        // L-L rotation
        if (BF>1 and key<node->left->data){
           return rightrotate(node);
        }
        // R-R rotation
        if (BF<-1 and key>node->right->data)
        {
            return leftrotate(node);
        }
        // L-R rotation
        if (BF>1 and key>node->left->data)
        {
            node->left = leftrotate(node->left);
            return rightrotate(node);
        }
        // R-L rotation
        if (BF<-1 and key<node->right->data)
        {
            node->right = rightrotate(node);
            return leftrotate(node);
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



};





int main (){
    AVL_Tree<int> node(23); 
    node.insert(&node,22);
    node.insert(&node,25);
    // cout<<node.insert(&node,45)->getheight(node.insert(&node,45))<<endl;
    cout<<node.getheight(&node)<<endl;  

    // AVL_Tree<int> nodel(22);

    // node.preorder(&node); 

       return 0;
}