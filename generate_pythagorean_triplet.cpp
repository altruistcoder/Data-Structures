#include <iostream>
using namespace std;
void genPythagoreanTriplets(int l)
{
    int a, b, c = 0;
    int m=2;
    while (c < l)
    {
        for(int n=1; n<m; ++n)
        {
            a = m*m-n*n;
            b = 2*m*n;
            c = m*m+n*n;
            if(c > l)
                break;
            cout<<"("<<a<<", "<<b<<", "<<c<<")\n";
        }
        m++;
    }
}

int main()
{
    int l;
    cout<<"Enter the limit: ";
    cin>>l;
    cout<<"The various generated Pythagorean Triplets are:\n";
    genPythagoreanTriplets(l);
    return 0;
}
