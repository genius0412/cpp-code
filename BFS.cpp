#include <bits/stdc++.h>
#define M 100

using namespace std;

queue <int> q;
vector <int> graph[M+5];
int vt[M+5], v, l;

void input(){
    scanf("%d%d", &v, &l);
    int a, b;
    for(int i=1; i<=l; i++){
        scanf("%d%d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}
void bfs(int k){
    q.push(k);

    int tmp;
    while(!q.empty()){
        tmp = q.front();
        q.pop();

        printf("%d ", tmp);
        vt[tmp] = 1;

        for(auto u: graph[tmp]){
            if(vt[u]) continue;
            q.push(u);
            vt[u] = 1;
        }
    }
}
int main(){
    input();
    bfs(1);
    return 0;
}
