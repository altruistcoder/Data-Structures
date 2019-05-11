#include<iostream>
#include<climits>
using namespace std;

int maxSumSubarray(int a[], int n)
{
    // Function to find the contiguous subarray whose sum is maximum in the array and also print this subarray
    int i, max_total = INT_MIN, max_curr = 0, s =0, e = 0, x=0;
    for(i=0; i<n; i++)
    {
        max_curr += a[i];
        if (max_total < max_curr)
        {
            max_total = max_curr;
            s = x;
            e = i;
        }
        if (max_curr < 0)
        {
            max_curr = 0;
            x = i + 1;
        }
    }
    cout<<"Maximum Contiguous Sum in the given array: "<<max_total<<endl;
    cout<<"Max Subarray: ";
    for(i=s; i<=e; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int a[100], n;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    maxSumSubarray(a, n);
    return 0;
}
