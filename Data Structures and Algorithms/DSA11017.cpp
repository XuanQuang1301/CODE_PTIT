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
Node *se(Node *t, int x){
    if(t == NULL) return NULL;
    Node *q = t;
    if(t->key < x){
        q = se(t->r, x);
    }
    else q = se(t->l, x);
    return q;
}
Node *insert(Node *t, int x){
    if(t == NULL){
        t = new Node (x);
    }
    if(t -> key == x){
        return t;
    }
    if(t->key < x){
        t->r = insert(t->r, x);
    }
    else t->l = insert(t->l, x);
    return t;
}
void Try(Node *t){
    if(t == NULL) return;
    Try(t->l);
    Try(t->r);
    cout << t->key << " ";
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Node *t;
        for(int i = 0; i < n; i++){
            int c; cin >> c;
            if(i == 0){
                t = new Node(c);
            }
            else insert(t, c);
        }
        Try(t);
        cout << endl;
    }
}