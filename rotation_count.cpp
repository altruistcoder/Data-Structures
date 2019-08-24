#include<bits/stdc++.h>
using namespace std;

int countRotations(int a[], int low, int high)
{
    if (high < low)
        return 0;
    if (high == low)
        return low;
    int mid=low+(high-low)/2;
    if (mid < high && a[mid+1] < a[mid])
       return (mid+1);
    if (mid > low && a[mid] < a[mid-1])
       return mid;
    if (a[high] > a[mid])
       return countRotations(a, low, mid-1);
    return countRotations(a, mid+1, high);
}

int main()
{
    int n, a[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"The rotation count of the given rotated sorted array is: "<<countRotations(a, 0, n-1);
    return 0;
}
