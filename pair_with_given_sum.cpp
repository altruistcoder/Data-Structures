#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int A[], int N, int s)
{
    int l, r;
    // Sorting the array
    sort(A, A + N);
    l = 0;
    r = N-1;
    while (l < r)
    {
        if(A[l] + A[r] == s)
        {
            cout<<"The suitable pair is ("<<A[l]<<","<<A[r]<<")";
            return true;
        }
        else if(A[l] + A[r] < s)
            l++;
        else
            r--;
    }
    return false;
}

int main()
{
    int A[200], N, i, s;
    cout<<"Enter total no. of elements to be sorted: ";
    cin>>N;
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<N;i++)
        cin>>A[i];
    cout<<"Enter the value of sum to be find: ";
    cin>>s;
    if (!hasArrayTwoCandidates(A, N, s))
        cout << "No such pair present in the array whose sum is equal to entered sum";
    return 0;
}
