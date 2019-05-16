#include <iostream>
#include <limits.h>
using namespace std;

void secondLargest(int a[], int n)
{
    int i, first, second;
    if(n < 2)
    {
        cout<<"No. of elements in the array are less than two";
        return;
    }
    first = second = INT_MIN;
    for(i=0; i<n; i++)
    {
        // If current element is smaller than the 'first', then update both 'first' and 'second'
        if(a[i] > first)
        {
            second = first;
            first = a[i];
        }
        // If a[i] is in between 'first' and 'second' then update 'second'
        else if(a[i]>second && a[i]!=first)
            second = a[i];
    }
    if (second == INT_MIN)
        cout<<"There is no second largest element\n";
    else
        cout<<"The second largest element is "<<second;
}

int main()
{
    int a[100], n;
    cout<<"Enter total no. of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    secondLargest(a, n);
    return 0;
}
