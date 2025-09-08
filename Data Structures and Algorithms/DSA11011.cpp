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
    if(t->key == x) return t;
    Node *q;
    q = se(t->l, x);
    if(q == NULL){
        q = se(t->r, x);
    }
    return q;
}
void add_l(Node *t, int x, int y){
    if(t == NULL) return;
    Node *q;
    q = se(t, x);
    if(q->l != NULL) return;
    else{
        q->l = new Node(y);
    }
}
void add_r(Node *t, int x, int y){
    if(t == NULL) return;
    Node *q;
    q = se(t, x);
    if(q->r != NULL) return;
    else{
        q->r = new Node(y);
    }
}
bool ok;
void Try(Node *t){
    if(t == NULL) return;
    if((t->l != NULL && t->r == NULL) || (t->r != NULL && t->l == NULL)){
        ok = false;
        return;
    }
    Try(t->l);
    Try(t->r);
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
                root = new Node(x);
            }
            if(a == 'L'){
                add_l(root, x, y);
            }
            else add_r(root, x, y);
        }
        ok = true;
        Try(root);
        cout << (ok ? 1 : 0) << endl;
    }
}