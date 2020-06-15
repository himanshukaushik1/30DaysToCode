// Merge Sort Code in C++

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int a[MAX];

void merge(int l, int mid, int r)
{
    int n = mid-l+1, m = r-mid;
    int arr1[n], arr2[m];
    for(int i=0; i<n; i++) arr1[i] = a[l+i];
    for(int i=0; i<m; i++) arr2[i] = a[mid+1+i];
    int i=0, j=0, k=l;
    while(i<n and j<m)
    {
        if(arr1[i] < arr2[j])
        {
            a[k] = arr1[i];
            i++; k++;
        }
        else
        {
            a[k] = arr2[j];
            j++; k++;
        }
    }
    while(i<n)
    {
        a[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        a[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(l,mid);
        mergeSort(mid+1, r);
        merge(l,mid,r);
    }
}

int main()
{
    int n;
    cout << "Number of Elements : ";
    cin >> n;
    cout << "\nEnter Values : \n";
    for(int i=0; i<n; i++) cin >> a[i];
    mergeSort(0,n-1);
    cout << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;

    return 0;
}