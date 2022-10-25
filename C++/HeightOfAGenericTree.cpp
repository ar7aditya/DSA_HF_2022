#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    vector<Node*>children;
};

Node *newNode(int key)
{
	Node *temp=new Node;
	temp->data=key;
	return temp;

}

Node *construct(int arr[],int n )
{
    Node *root=NULL;
    stack<Node*>st;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            st.pop();
        }else{
            Node *t=newNode(arr[i]);
            //t->data=arr[i];
            
            if(st.size()>0){
                st.top()->children.push_back(t);
            }else{
                root=t;
            }
            st.push(t);
        }
    }
    return root;
}

int height(Node *node)
{
    int ht = -1;

  for(Node * child : node -> children){
    int htOfChild = height(child);
    ht = max(ht , htOfChild);
  }

  return ht + 1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Node *root=construct(arr,n);
    int h=height(root);
    cout << h << endl;
}
