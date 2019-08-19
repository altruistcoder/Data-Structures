#include <iostream>
#include <string.h>
using namespace std;

int lcs(char x[],char y[])
{
    int i, j, m=strlen(x), n=strlen(y), r[m+1][n+1];
    for(i=0; i<=m; i++)
        for(j=0; j<=n; j++)
        {
            if (i==0 || j==0)
                r[i][j]=0;
            else if(x[i-1]==y[j-1])
                r[i][j]=r[i-1][j-1]+1;
            else
                r[i][j] = max(r[i-1][j], r[i][j-1]);
        }
    return r[m][n];
}

int main()
{
    char x[50], y[50];
    cout<<"Enter the two strings: ";
    cin>>x>>y;
    cout<<"The length of the longest common subsequence is: "<<lcs(x, y)<<endl;
    return 0;
}
