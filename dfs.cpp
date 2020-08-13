#include <bits/stdc++.h>
#define M 100

using namespace std;

vector <int> A[M+5];
int vt[M+5], v, l;

void input(){
    scanf("%d%d", &v, &l);
    int a, b;
    for(int i=1; i<=l; i++){
        scanf("%d%d", &a, &b);
        A[a].push_back(b);
        A[b].push_back(a);
    }
}
void dfs(int node){
    printf("%d ", node);

    for(auto u: A[node]){
        if(vt[u]) continue;
        vt[u] = 1;
        dfs(u);
    }
}
int main(){
    input();
    dfs(1);
    return 0;
}
