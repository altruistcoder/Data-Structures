#include <iostream>
using namespace std;

int getOddOccurrences(int a[], int n)
{
    int r = 0;
    // XORing with the previous result in every iteration
    for (int i=0; i<n; i++)
        r = r^a[i];
    return r;
}

int main()
{
    int n, o, a[50];
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    o = getOddOccurrences(a, n);
    cout<<"The number occurring odd no. of times in the given array: "<<o;
    return 0;
}
