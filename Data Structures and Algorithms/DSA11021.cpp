#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    Node *l;
    Node *r;
    Node (int i){
        key = i;
        l = NULL;
        r = NULL;
    }
};
int a[1005];
Node *insert(Node *t, int x){
    if(t == NULL){
        t = new Node (x);
    }
    if(t->key == x){
        return t;
    }
    if(t-> key < x){
        t->r = insert(t->r, x);
    }
    else t->l = insert(t->l, x);
    return t;
}
void Try(Node *t){
    if(t == NULL) return;
    if(t->l == NULL && t->r == NULL) cout << t->key << " ";
    Try(t->l);
    Try(t->r);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *root;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0){
                root = new Node (a[i]);
            }
            else insert(root, a[i]);
        }
        Try(root);
        cout << endl;
    }
}