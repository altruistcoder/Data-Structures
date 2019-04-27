#include <bits/stdc++.h>
#include<math.h>
using namespace std;
bool findTriplet(int a[], int n)
{
    // Squaring all the elements in the array
    for (int i=0; i<n; i++)
        a[i] = a[i]*a[i];

    // Sorting the array
    sort(a, a + n);

    // Now, We'll fix one element in each iteration and find the other two elements
    for (int i = n-1; i >= 2; i--)
    {
        int j = 0;
        int k = i-1;
        while (j < k)
        {
            if (a[j] + a[k] == a[i])
            {
                cout<<"The pythagorean triplet present in the given array is ("<<sqrt(a[j])<<","<<sqrt(a[k])<<","<<sqrt(a[i])<<").";
                return true;
            }
            (a[j]+a[k] < a[i])? j++: k--;
        }
    }
    return false;
}
int main()
{
    int A[200], N, i;
    cout<<"Enter total no. of elements to be sorted: ";
    cin>>N;
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<N;i++)
        cin>>A[i];
    if (!findTriplet(A, N))
        cout<<"No Pythagorean Triplet preesent in the given array";
    return 0;
}
