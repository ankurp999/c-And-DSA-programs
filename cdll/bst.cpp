#include <iostream>
using namespace std;
struct node
{
    node *left;
    int data;
    node *right;
};
class bst
{
    node *root;

public:
    bst()
    {
        root = NULL;
    }
    node *empty()
    {
        if (root)
        {
            return root;
        }
        return NULL;
    }
    void newelement(int val)
    {
        node *n = new node;
        node *temp = root;
        node *tempn;
        n->data = val;

        if (root == NULL)
        {
            n->right = NULL;
            n->left = NULL;
            root = n;
        }
        else
        {
            while (temp)
            {
                tempn = temp;
                if (temp->data < n->data)
                    temp = temp->right;
                else
                    temp = temp->left;
            }
            if (tempn->data < n->data)
                tempn->right = n;
            else
                tempn->left = n;
            n->right = NULL;
            n->left = NULL;
        }
    }
    void insert(int data)
    {
        node *n = new node;
        n->data = data;
        if (root == NULL)
        {
            n->left = NULL;
            n->right = NULL;
            root = n;
        }
        else
        {
            insertRecursive(root, data);
        }
    }
    node *insertRecursive(node *root, int data)
    {
        if (root == nullptr)
        {
            node *n = new node;
            n->data = data;
            n->left = nullptr;
            n->right = nullptr;
            return n;
        }

        if (data < root->data)
        {
            root->left = insertRecursive(root->left, data);
        }
        else if (data > root->data)
        {
            root->right = insertRecursive(root->right, data);
        }

        return root;
    }
    void deleteRoot()
    {
        node *partemp = NULL;
        node *temp = root;
        
        if (temp == root) // for root node
        {
            if (root == NULL)
                cout << " underflow !!";
            if (temp->right == NULL && temp->left == NULL)
            {
                delete temp;
                root = NULL;
            }
            else if (temp->right && temp->left)
            {
                node *parpre = temp;

                node *pre = temp->right;
                while (pre->left != NULL)
                {
                    parpre = pre;
                    pre = pre->left;
                }
                temp->data = pre->data;
                if (pre == parpre->left)
                    parpre->left = pre->right;
                else
                    parpre->right = pre->right;
                delete pre;
            }
            else 
            {
                if(temp->right){
                root= temp-> right;
                delete temp;
                }
                else 
                {
                    root = temp -> left;
                    delete temp;
                }
            }
        }
    }
    void deleteNode(int val)
    {

        node *partemp = NULL;
        node *temp = root;
        while (temp)
        {
            if (temp->data < val)
            {
                partemp = temp;
                temp = temp->right;
            }
            else if (temp->data == val)
                break;
            else if (temp->data > val)
            {
                partemp = temp;
                temp = temp->left;
            }
        }

        if ((temp->left == NULL) && (temp->right == NULL))
        {
            if (partemp->data > val)
                partemp->left = NULL;
            else
                partemp->right = NULL;
            delete temp;
        }
        else if ((temp->left) && (temp->right))
        {
            node *parpre = temp;
            node *pre = temp->right;
            while (pre->left != NULL)
            {
                parpre = pre;
                pre = pre->left;
            }
            temp->data = pre->data;
            if (pre == parpre->left)
                parpre->left = pre->right;
            else
                parpre->right = pre->right;
            delete pre;
        }
        else if ((temp->left) || (temp->right))
        {
            node *ptr = NULL;
            if (temp->left)
                ptr = temp->left;
            else
                ptr = temp->right;
            //  cout<<ptr->data<<"<--";
            if (partemp->left == temp)
                partemp->left = ptr;
            else
                partemp->right = ptr;
            delete temp;
        }
    }

    node *searchNode(int val)
    {
        node *temp = root;
        if (temp == NULL)
            return NULL;
        else
            while (temp != NULL)
            {
                if (temp->data == val)
                    return temp;
                if (temp->data > val)
                    temp = temp->left;
                else
                    temp = temp->right;
            }
        return NULL;
    }

    void display(node *root)
    { /*inorder*/
        if (root)
        {
            display(root->left);
            cout << " " << root->data << " ";
            display(root->right);
        }
    }
    void preorder(node *root)
    {
        if (root)
        {
            cout << " " << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
    }
    void postorder(node *root)
    {
        if (root)
        {
            postorder(root->right);
            cout << " " << root->data << " ";
            postorder(root->left);
        }
    }
    ~bst(){
        while(root){
            deleteRoot();
        }
    }
     bst(bst& b){
     root = NULL;
     node *temp = b.root;
     
        
            b.inorderCopy(*this,temp);
        
     }
     bst& operator= (bst& t){
        t.inorderCopy(*this,t.root);
        return *this;
     }
     void inorderCopy(bst& a , node* temp){
     if(temp){
        inorderCopy(a,temp->left);
        a.insert(temp->data);
        inorderCopy(a,temp->right);
     }
     }
};
int main()
{
    bst a;
    a.insert(50);
    a.insert(30);
    a.insert(10);
    a.insert(20);
    a.insert(15);
    a.insert(25);
    a.insert(70);
    a.insert(60);
    a.insert(90);
    a.insert(80);
    a.insert(75);
    a.insert(85);

    //  a.newelement(2);.
    //  a.newelement(5);
    //  a.newelement(7);
    //  a.newelement(3);
    //  a.newelement(0);
    //  a.newelement(1);
    //  a.display(a.empty());
    //  cout<<endl;
    //  a.preorder(a.empty());
    //  cout<<endl;
    //  a.postorder(a.empty());
    // a.deleteRoot();
    // a.deleteNode(75);
    // a.deleteNode(50);
    a.display(a.empty());
     cout<<endl;
bst b= a;
b.display(b.empty());

    // cout<<a.searchNode(15);
    //  cout<<endl;

    return 0;
}