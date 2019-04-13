#include <iostream>
using namespace std;
void Knapsack(int W,int wt[],int val[],int n)
{
    int cur_w,i,maxi,used[50];
    float tot_v;
    for(i=0;i<n;i++)
        used[i]=0;
    cur_w=W;
    while(cur_w>0)
    {
        maxi=-1;
        for(i=0;i<n;i++)
            if((used[i]==0)&&((maxi==-1)||((float)val[i]/wt[i]>(float)val[maxi]/wt[maxi])))
                maxi=i;
        used[maxi]=1;
        cur_w-=wt[maxi];
        tot_v+=val[maxi];
        if(cur_w<0)
        {
         tot_v-=val[maxi];
         tot_v+=(1+(float)cur_w/wt[maxi])*val[maxi];
        }
    }
    cout<<"Maximum possible benefit value: "<<tot_v;
}
int main()
{
    int i,val[50],wt[50],W,n;
    cout<<"Enter the number of items: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter value and weight of item "<<i<<" : ";
        cin>>val[i]>>wt[i];
    }
    cout<<"Enter the capacity of Knapsack: ";
    cin>>W;
    Knapsack(W,wt,val,n);
    return 0;
}
