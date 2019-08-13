#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if(n==0 || n==1)
        return n;
    int j = 0;
    for(int i=0; i<n-1; i++)
        if(arr[i] != arr[i+1])
            arr[j++] = arr[i];
    arr[j++] = arr[n-1];
    return j;
}

int main()
{
    int a[100], n, m, i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    m = removeDuplicates(a, n);
    cout<<"The resultant array is:\n";
    for(i=0; i<m; i++)
        cout<<a[i]<<" ";
    return 0;
}
