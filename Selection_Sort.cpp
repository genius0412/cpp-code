#include <bits/stdc++.h>

using namespace std;

int data[105], n;

void input(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
}
void selection_sort(){
    int _min;
    for(int i=0; i<n-1; i++){
        _min = i;
        for(int j=i+1; j<n; j++){
            if(data[j] < data[_min]){
                _min = j;
            }
        }
        swap(data[i], data[_min]);
    }
}
void print(){
    for(int i=0; i<n; i++){
        printf("%d ", data[i]);
    }
}
int main(){
    input();
    selection_sort();
    print();
    return 0;
}
