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
Node *insert(Node *t, int s){
    if(t == NULL){
        t = new Node (s);
    }
    if(t->key == s){
        return t;
    }
    if(t->key < s){
        t->r = insert(t->r, s);
    }
    else t->l = insert(t->l, s);
    return t;
}
void Try(Node *t){
    if(t == NULL) return;
    cout << t->key << " ";
    Try(t->l);
    Try(t->r);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *root;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(i == 0){
                root = new Node (x);
            }
            else insert(root, x);
        }
        Try(root);
        cout << endl;
    }
}