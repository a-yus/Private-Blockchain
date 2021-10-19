#include <bits/stdc++.h>

using namespace std;

long long int x1, y1, x2, y2, n;
string s;

long long calculate(long long k, long long &x3, long long &y3)
{
    long long a = k/n;
    long long b = k%n;

    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'U')
        {
            y3 = y3 + a;
        }
        else if(s[i] ==  'D')
        {
            y3 = y3 - a;
        }
        else if(s[i] ==  'L')
        {
            x3 = x3 -a;
        }
        else
        {
            x3 = x3 +a;
        }
    }

    for(int i = 0; i<b; i++)
    {
        if(s[i] == 'U')
        {
            y3 = y3 + 1;
        }
        else if(s[i] ==  'D')
        {
            y3 = y3 - 1;
        }
        else if(s[i] ==  'L')
        {
            x3 = x3 - 1;
        }
        else
        {
            x3 = x3 + 1;
        }
    }
    //cout<<x3<< " "<< y3;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    cin>>x1>>y1>>x2>>y2>>n>>s;

    long long first = 0;
    long long last = 1000 ;
    long long middle;
    long long x3, y3;

    while(first<=last)
    {
        middle = (first+last)/2;
        x3 = x1;
        y3 = y1;

        calculate(middle, x3, y3);
        long long dist = (abs(x3-x2)+abs(y3-y2));
        if(dist<=middle)
        {
            last = middle;
        }
        else
        {
            first = middle;
        }
    }

    if(last>5e17)
    {
        cout<<"-1";
        return 0;
    }
    else
    {
        cout<<last;
        return 0;
    }

}











// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int x1, x2, y1, y2;
//     int n;
//     cin>>x1>>y1>>x2>>y2>>n;
//     string s;
//     cin>>s;

//     long long count = 0;
//     long long count2 =0;
//     int strptr = 0;

//     int lastx1;
//     int lasty1;

//     while(x1 != x2 || y1 != y2)
//     {
//         //cout<<"yes reached";
//         count = count + 1;
//         if(s[strptr] == 'U')
//         {
//             y1 = y1 + 1;
//         }
//         else if(s[strptr] == 'D')
//         {
//             y1 = y1-1;
//         }
//         else if(s[strptr] == 'L')
//         {
//             x1 = x1 -1;
//         }
//         else
//         {
//             x1 = x1 + 1;
//         }

//         if(x1 == x2 && y1 == y2)
//         {
//             cout << count;
//             return 0;
//         }

//         if(x1 != x2)
//         {
//             if(x1 > x2)
//             {
//                 x1 = x1 - 1;
//             }
//             else
//             {
//                 x1 = x1 + 1;
//             }
//         }
//         else
//         {
//             if(y1>y2)
//             {
//                 y1 = y1 - 1;
//             }
//             else
//             {
//                 y1 = y1 + 1;
//             }
//         }


//         if(strptr == n-1)
//         {
//             strptr = 0;
//         }
//         else
//         {
//             strptr++;
//         }

//         if(count != 1)
//         {
//             if(lastx1 == x1 && lasty1 == y1)
//             {
//                 count2++;
//             }
//         }

//         if(count2 >10000000000)
//         {
//             cout<<"-1";
//             return 0;
//         }

//         lastx1 = x1;
//         lasty1 = y1;
//     }

//     cout<< count;

// }
