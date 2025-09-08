#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node (int i){
        key = i;
        left = NULL;
        right = NULL;
    }
};
Node *insert(Node *t, int x){
    if(t == NULL){  
        t = new Node (x);
    }
    if(t -> key == x){
        return t;
    }
    if(t->key < x){
        t->right = insert(t->right, x);
    }
    else t->left = insert(t->left, x);
    return t;
}
void Try(Node *t){
    if(t == NULL) return;
    Try(t->left);
    cout << t->key << " ";
    Try(t->right);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *root;
        for(int i = 0; i < n; i++){
            int x, y; char a;
            cin >> x >> y >> a;
            if(i == 0){
                root = new Node (x);
                insert(root, y);
            }
            else{
                insert(root, x);
                insert(root, y);
            }
        }
        Try(root);
        cout << endl;
    }
}