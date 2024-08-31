#include <iostream>
using namespace std;
struct node
{
    node *right;
    node *left;
    int data;
    int hight;
};
class avl
{
    node *root;

public:
    avl()
    {
        root = NULL;
    }
    int bf(node *temp)
    {
        if (temp == NULL)
            return 0;
        return gethight(temp->left) - gethight(temp->right);
    }
    node *leftrotation(node *);
    node *rightrotation(node *);

    void insert(int data)
    {
        root = insertion(root, data);
    }
    node *insertion(node *ptr, int data)
    {
        if (ptr == NULL)
        {
            node *n = new node;
            n->data = data;
            n->right = NULL;
            n->left = NULL;
            n->hight = 1;
            return n;
        }
        if (data > ptr->data)
            ptr->right = insertion(ptr->right, data);
        else if (data < ptr->data)
            ptr->left = insertion(ptr->left, data);
        else
            return ptr;
        ptr->hight = max(gethight(ptr->right), gethight(ptr->left)) + 1;

        int balance = bf(ptr);

        // LL condition
        if (balance > 1 && data < ptr->left->data)
            return rightrotation(ptr);

        // RR condition
        if (balance < -1 && data > ptr->right->data)
            return leftrotation(ptr);

        // LR condition
        if (balance > 1 && data > ptr->left->data)
        {
            ptr->left = leftrotation(ptr->left);
            return rightrotation(ptr);
        }

        // RL condition
        if (balance < -1 && data < ptr->right->data)
        {
            ptr->right = rightrotation(ptr->right);
            return rightrotation(ptr);
        }

        return ptr;
    }

    int max(int a, int b)
    {
        return (a > b ? a : b);
    }
    int gethight(node *t)
    {
        if (t == NULL)
            return 0;
        return t->hight;
    }
    void inorder()
    {
        display(root);
        cout<<endl;
        preordeR(root);
        cout<<endl;
        postordeR(root);
    }
    void display(node *temp)
    {
        if (temp)
        {
            display(temp->left);
            cout << temp->data << "(" << bf(temp) << ")";
            display(temp->right);
        }
    }
    void preordeR(node* temp){
        if(temp){
            cout << temp->data << "(" << bf(temp) << ")";
            preordeR(temp->left);
            preordeR(temp->right);
        }
    }
    void postordeR(node* temp){
        if(temp){
            postordeR(temp->left);
            postordeR(temp->right);
            cout << temp->data << "(" << bf(temp) << ")";
        }
    }
    ~avl(){
        while(root){
             cout<<"dtg";
             del(root->data);
        }
    }

    void del(int val)
    {
        root = deletion(root, val);
    }
    node* deletion( node*,int);
    node* minValue(node* temp){
        while ( temp->left){
            temp= temp->left;
        }
        return temp;
    }
};
node* avl::deletion(node* ptr ,int data){
    if( ptr == NULL)
    return ptr;
    if (data >ptr-> data)
    ptr-> right = deletion(ptr->right ,data);
    else if (data < ptr->data)
    ptr->left = deletion(ptr-> left, data);
    else{
        // one or no child
        if( (ptr->right== NULL)||(ptr->left == NULL))
        {
            node* temp = ptr->left?ptr->left:ptr->right;
            if (temp == NULL)
            {
                temp = ptr;
                 ptr = NULL;
            }
            else
            {
                *ptr = * temp;
            }
            delete temp;
        }
        else 
        {
            // child with two children
            node* temp = minValue(ptr->right);
            ptr-> data = temp -> data;
            // to delete successor of the temp node 
            ptr->right = deletion(ptr->right,temp->data);
        }
    }
    // if tree has only one child
    if(ptr == NULL)
    return ptr;
    ptr->hight = 1+  max(gethight(ptr->left),gethight(ptr->right));
    int balance = bf(ptr);
    // LL unbalancy
    if(balance> 1 && bf(ptr->left)>=0)
    return leftrotation(ptr);
    // RR unbalancy
    if( balance < -1 && bf(ptr->right)<=0)
    return  rightrotation(ptr);
    // RL unbalancy
    if(balance > 1 && bf(ptr-> left)>0){
    ptr->left = rightrotation(ptr->left);
    return leftrotation(ptr);
    }
    // LR unbalancy
    if ( balance< -1 && bf(ptr->left)<0)
    {
        ptr->right = leftrotation(ptr->left);
        return rightrotation(ptr);
    }
    return ptr;

}
node *avl::rightrotation(node *A)
{
    node *B = A->left;
    A->left = B->right;

    B->right = A;
    A->hight = max(A->left->hight, A->right->hight) + 1;
    B->hight = max(B->left->hight, B->right->hight) + 1;
    return B;
}
node *avl::leftrotation(node *A)
{
    node *B = A->right;
    A->right = B->left;

    B->left = A;
    A->hight = max(gethight(A->left), gethight(A->right)) + 1;
    B->hight = max(gethight(B->left), gethight(B->right)) + 1;
    return B;
}
int main()
{
    avl a;
    a.insert(30);
    a.insert(50);
    a.insert(70);
    a.insert(90);
    a.insert(100);
    a.insert(110);
    a.del(50);
    a.inorder();
    return 0;
}