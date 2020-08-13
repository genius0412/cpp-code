#include <bits/stdc++.h>
#define M 100

int A[M+5], n;

void input(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
}
void insertion_sort(){
    int i, j, key;

    for(i=1; i<n; i++){
        key = A[i];

        for(j=i-1; j >= 0 && A[j] > key; j--){
            A[j+1] = A[j];
        }
        A[j+1] = key;
    }
}
void print(){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}
int main(){
    input();
    insertion_sort();
    print();
    return 0;
}
