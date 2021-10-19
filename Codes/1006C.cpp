#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin>>x;

    vector<int> a(x);

    for(int i =0 ; i<x; i++)
    {
        cin>>a[i];
    }

    ll sum1, sum2, sum3;
    sum1 = sum2 = sum3 =0;

    ll msum1 = 0, msum2 = 0, msum3 = 0;

    int start = 0;
    int last = x-1;
    int flag = 0;

    sum1 = a[start];
    sum3 = a[last];

    while(start<last)
    {
        if(sum1 == sum3)
        {
            msum1 = sum1;
        }
        if(sum1<sum3)
        {
            start = start+1;
            sum1 = sum1 + a[start];
        }
        else if(sum3 < sum1)
        {
            last = last -1;
            sum3 = sum3 + a[last];
        }
        else
        {
            if((start + 1) <last)
            {
                start = start + 1;
                sum1 = sum1 + a[start];
            }
            else
            {
                cout<<msum1;
                return 0;
            }
        }
    }

    cout<<msum1;

}
