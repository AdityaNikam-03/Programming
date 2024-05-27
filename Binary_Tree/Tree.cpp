#include <iostream>
#include <queue>
#include<algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    cout << "Enter Node Data : ";
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();

    return n;
}

void LevelPrint(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(n);
    q.push(NULL);

    while (!q.empty()){
        Node* temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            q.pop();
        }
    }
}

void Print(Node *n)
{

    if (n == NULL)
    {
        return;
    }

    Print(n->left);
    cout << n->data << " ";
    Print(n->right);
}

Node* levelOrderBuild(){
    int d;
    cout<<"Enter Data : ";
    cin>>d;
    Node* root=new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current=q.front();
        int c1,c2;

        cout<<"Enter Data : ";
        cin>>c1;
        cout<<"Enter Data : ";
        cin>>c2;

        if(c1!=-1){
            current->left=new Node(c1);
            q.push(current->left);
        }

        if(c2!=-1){
            current->right=new Node(c2);
            q.push(current->right);
        }
        q.pop();
    }
    return root;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int h1=height(root->left);
    int h2=height(root->right);

    return 1+max(h1,h2);
}

int Max(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

int Diameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int d1,d2,d3;
    d1=height(root->left)+height(root->right);
    d2=Diameter(root->left);
    d3=Diameter(root->right);
    cout<<"("<<d1<<","<<d2<<","<<d3<<")"<<endl;
    return Max(d1,d2,d3);
}


//---------Optimized Code for Diameter--------
class HDPair{
public:
    int height;
    int diameter;
};

HDPair OptDiameter(Node* root){
    HDPair p;
    if(root==NULL){
        p.height=p.diameter=0;
        return p;
    }

    HDPair left=OptDiameter(root->left);
    HDPair right=OptDiameter(root->right);

    p.height=max(left.height,right.height)+1;

    int d1=left.height+right.height;
    int d2=left.diameter;
    int d3=right.diameter;

    p.diameter=max(d1,max(d2,d3));
    return p;
}

int main()
{
    Node *n = levelOrderBuild();
    Print(n);
    cout << "\n";
    LevelPrint(n);
    cout<<"\n"<<"Height Of tree : "<<height(n);

    cout<<"\n"<<"Diameter of Tree : "<<"\n"<<Diameter(n);

    cout<<"\n"<<"Optimized Diameter : "<<OptDiameter(n).diameter<<endl;
    return 0;
}