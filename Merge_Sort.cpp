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


void merge_sort(int A[], int low, int high){
    if (low >= high) return;

    int mid = (low + high) / 2;

    merge_sort(A, low, mid);
    merge_sort(A, mid+1, high);

    int i = low, j = mid + 1, B[M+5];
    for (int k = low;k <= high; k++){
        if (j > high) B[k] = A[i++];
        else if (i > mid) B[k] = A[j++];
        else if (A[i] < A[j]) B[k] = A[i++];
        else B[k] = A[j++];
    }

    for (i = low; i <= high; i++) A[i] = B[i];
}
int main(){
    input();
    merge_sort(A, 0, n-1);
    print();
    return 0;
}
