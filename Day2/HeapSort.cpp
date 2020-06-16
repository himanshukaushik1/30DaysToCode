// Heap Sort Code in C++

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int a[MAX];

int parent(int i) { return i>>1;}
int lchild(int i) { return (i<<1)+1;}
int rchild(int i) { return (i<<1)+2;}

void heapify(int i, int n){
    int ind = i, lc = lchild(i), rc = rchild(i);
    if(lc<n){
        if(a[lc]>a[i])
            ind = lc;
    }
    if(rc<n){
        if(a[rc]>a[ind])
            ind = rc;
    }
    if(ind != i){
        swap(a[ind], a[i]);
        heapify(ind, n);
    }
}

void heapSort(int l, int r, int n){
    for(int i=n/2; i>=0; i-- ){
        heapify(i, n);
    }
    for(int i=n-1; i>0; i--){

        swap(a[i], a[0]);
        heapify(0, i);
    }
}
int main(){
    int n;
    cout << "Number of Elements : ";
    cin >> n;
    cout << "\nEnter Values : \n";
    for(int i=0; i<n; i++) cin >> a[i];
    heapSort(0,n-1, n);
    cout << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    return 0;
}
