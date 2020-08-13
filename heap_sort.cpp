#include <bits/stdc++.h>
#define M 100

using namespace std;


priority_queue <int> pq;
int A[M+5], n;

void input(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
}
void min_heap_sort(){
    for(int i=0; i<n; i++){
        pq.push(-A[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", -pq.top());
        pq.pop();
    }
}
void max_heap_sort(){
    for(int i=0; i<n; i++){
        pq.push(A[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", pq.top());
        pq.pop();
    }
}
int main(){
    input();
    min_heap_sort();
    max_heap_sort();
    return 0;
}
