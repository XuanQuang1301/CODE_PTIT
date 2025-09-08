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
int MaxSum;
int dfs(Node *root){
    if(!root) return INT_MIN;

    if(!root->l && !root->r) return root->key;
    int left = dfs(root->l);
    int right = dfs(root->r);
    if(root -> l && root -> r){
        MaxSum = max(MaxSum, left + right + root->key);
        return max(left, right) + root->key;
    }
    return (root->l ? left : right) + root -> key;
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
        MaxSum = INT_MIN;
        int tmp = dfs(root);
        if(!(root->l && root->r)){
            MaxSum = max(MaxSum, tmp);
        }
        cout << MaxSum << endl;
    }
}