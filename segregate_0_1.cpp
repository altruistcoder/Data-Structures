#include <iostream>
using namespace std;

void segregate0and1(int a[], int n)
{
    int x = 0;
    int y = n-1;
    while(x < y)
    {
        if(a[x] == 1)
        {
            swap(a[x], a[y]);
            y -= 1;
        }
        else
            x += 1;
    }
}

void swap(int &i, int &j)
{
    i = i+j;
    j = i-j;
    i = i-j;
}
int main()
{
    int n, a[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    segregate0and1(a, n);
    cout<<"The segregated array is:"<<endl;
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}
