#include<bits/stdc++.h>
using namespace std;


class node
{
    char timestamp_val[250];
    string data;
    int nodeno;
    string nodeid;
    string refnodeid;
    string childRefnodeid[100];
    string genesisRefnodeid;
    int val;
    string hashval;
    node *child;
    node *same_level;
    int child_val;
public:
    void GensisNode();
    void create_childset();
    void create_childnode();

};

int unique_no = 0;
int genesis_node_val = -1;
node *root;

void  node :: GensisNode()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    node *temp;
    temp = new node;
    root = temp;
    unique_no += 1;
    strcpy(temp->timestamp_val, dt);
    temp->nodeno = unique_no;
    temp->child = NULL;
    temp->same_level = NULL;
    cout<<"\nEnter the Genesis node's value: ";
    cin>>genesis_node_val;
    temp->val = genesis_node_val;
    return;
}

void node :: create_childset()
{
    if (root == NULL)
    {
        return;
    }
    int val;
    cout<<"\nEnter the value of the root node: ";
    cin>>val;

}

void node :: create_childnode()
{
    if(root == NULL)
    {
        return;
    }
    int val;
    cout<<"\nEnter the value of the root node: ";
    cin>>val;
}

int main()
{
    root = NULL;
    int choice,flag=1;
    node abc;
    while(flag == 1)
    {
        cout<<"\n1. Create a Genesis Node ";
        cout<<"\n2. Create a set of child nodes ";
        cout<<"\n3. Create a child node ";
        cout<<"\n4. Encrypt and Decrypt Data ";
        cout<<"\n5. Verify owner of the node ";
        cout<<"\n6. Edit value of a node ";
        cout<<"\n7. Transfer ownership ";
        cout<<"\n8. Find the Longest chain of genesis node ";
        cout<<"\n9.  Find the longest chain of any node";
        cout<<"\n10. Merge 2 nodes ";
        cout<<"\nWhat do you want to do: ";
        cin>>choice;
        switch(choice)
        {
            case 1: abc.GensisNode();
                    break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            case 8: break;
            case 9: break;
            case 10: break;
            default : break;
        }
        cout<<"\nDo you want to continue(1-yes/0-no): ";
        cin>>flag;
    }
    return 0;
}
