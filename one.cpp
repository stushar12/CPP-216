#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        bool check[n+1];
        fill(check,check+n+1,true);

        for(int i=2;i<=n;i++)
        {
            if(check[i])
            {
                cout<<i<<" ";
                for(int j=i*i;j<=n;j=j+i)
                {
                    check[j]=false;
                }
            }
        }
        cout<<endl;
    }
}
