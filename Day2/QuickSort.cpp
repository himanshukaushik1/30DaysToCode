// Quick Sort Code in C++

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int a[MAX];

int partit(int l, int r)
{
    int piv = a[r];
    int ind = l;
    for(int i=l; i<r; i++)
    {
        if(a[i] <= piv)
        {
            swap(a[ind++], a[i]);
        }
    }
    swap(a[r], a[ind]);
    return ind;
}

void quickSort(int l, int r)
{
    if(l>=r)
        return;
    int p = partit(l,r);
    quickSort(l,p-1);
    quickSort(p+1, r);
}

int main()
{
    int n;
    cout << "Number of Elements : ";
    cin >> n;
    cout << "\nEnter Values : \n";
    for(int i=0; i<n; i++) cin >> a[i];
    quickSort(0,n-1);
    cout << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    return 0;
}