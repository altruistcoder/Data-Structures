#include <iostream>
#include <string.h>
using namespace std;

bool checkAnagrams(char st1[], char st2[])
{
    int i, l1 = strlen(st1), res=0;
    if(l1 != strlen(st2))
        return false;
    for(i=0; i<l1; i++)
    {
        res = res ^ (int)st1[i];
        res = res ^ (int)st2[i];
    }
    return res==0;
}

int main()
{
    char s1[100], s2[100];
    cout<<"Enter the two strings to be checked for being anagrams: ";
    cin>>s1>>s2;
    if(checkAnagrams(s1, s2))
        cout<<"The given two strings are anagrams of each other\n";
    else
        cout<<"The given two strings are not anagrams of each other\n";
    return 0;
}
