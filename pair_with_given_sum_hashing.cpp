#include <bits/stdc++.h>
using namespace std;
bool findPairs(int A[], int N, int s)
{
    unordered_set<int> h;
    bool r = false;
    for(int i=0; i<N; i++)
    {
        int temp = s-A[i];
        if (temp >= 0 && h.find(temp) != h.end())
        {
            cout<<"Pair with the given sum "<<s<<" is ("<<A[i]<<","<<temp<<")"<<endl;
            r = true;
        }
        h.insert(A[i]);
    }
    return r;
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
    if (!findPairs(A, N, s))
        cout << "No such pair present in the array whose sum is equal to entered sum";
    return 0;
}
