#include <iostream>
using namespace std;

bool binaryPalindrome(int num)
{
    long n1=num, rev=0;
    while(n1>0)
    {
        rev <<= 1;
        if((n1&1)==1)
            rev ^= 1;
        n1 >>= 1;
    }
    return num==rev;
}

int main()
{
    long n;
    cout<<"Enter a number: ";
    cin>>n;
    if(binaryPalindrome(n))
        cout<<"The given number's binary representation is palindrome";
    else
        cout<<"The given number's binary representation is not palindrome";
}
