/*
* Solution to uva-11799
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a,p;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        a=-1;
        scanf("%d", &n);
        for(int j=0; j<n; j++)
        {
            scanf("%d", &p);
            a=max(a,p);
        }
        printf("Case %d: %d\n", i+1,a);
    }

    return 0;
}
