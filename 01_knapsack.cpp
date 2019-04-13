#include <iostream>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}
int Knapsack(int W,int wt[],int val[],int n)
{
    int i,w;
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0||w==0)
                k[i][w]=0;
            else if(wt[i-1]<=w)
                k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            else
                k[i][w]=k[i-1][w];
        }
    }
    return k[n][W];
}
int main()
{
    int i,val[20],wt[20],W,n;
    cout<<"Enter number of items in a knapsack: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter value and weight for item "<<i<<" : ";
        cin>>val[i]>>wt[i];
    }
    cout<<"Enter the capacity of Knapsack: ";
    cin>>W;
    cout<<Knapsack(W,wt,val,n);
    return 0;
}
