#include <iostream>

using namespace std;

void generateParenthesis(int i, int n, int open, int close, char output[])
{
    // Base Case
    if(i == 2*n)
    {
        output[i] = '\0';
        cout<<output<<endl;
        return;
    }

    // Recursive Case
    if(open < n)
    {
        output[i] = '(';
        generateParenthesis(i+1, n, open+1, close, output);
    }
    if(close < open)
    {
        output[i] = ')';
        generateParenthesis(i+1, n, open, close+1, output);
    }
}

int main()
{
    char output[100];
    int n;
    cout<<"Enter the value of order: ";
    cin>>n;
    generateParenthesis(0, n, 0, 0, output);
    return 0;
}
