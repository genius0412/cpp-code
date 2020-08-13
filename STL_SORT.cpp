#include <bits/stdc++.h>
#define M 100

using namespace std;

int A[M+5], n;

void input(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
}

void print(){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    puts("");
}

int main(){
    input();
    sort(A, A+n);
    print();
    return 0;
}
