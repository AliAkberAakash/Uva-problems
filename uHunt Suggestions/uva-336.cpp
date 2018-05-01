/*
* Solution to UVA 336 A Node Too Far
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int no,cas,w;
    ll u,v, to;

    vector<ll> node[100000];
    queue <ll> q;

    cas=0;
    while(1)
    {

        scanf("%d", &no);
        if(!no)
            break;

        map <ll, int> ttl;

        map <ll, int> :: iterator it;

        for(int i=0; i<no; i++)
        {
            scanf("%lld %lld", &u,&v);

            it=ttl.find(u);
            if (it == ttl.end())
            {
                ttl[u]=-1;
            }
            it=ttl.find(v);
            if (it ==ttl.end())
            {
                ttl[v]=-1;

            }

            node[u].push_back(v);
            node[v].push_back(u);
        }


        while(1)
        {
            scanf("%lld %d", &to, &w);
            if(!to && !w)
                break;
            cas++;

            q.push(to);
            ttl[to]=w;

            while(!q.empty())
            {
                ll z=q.front();
                q.pop();
                for(int i=0; i<node[z].size(); i++)
                {
                    if(ttl[node[z][i]] == -1)
                    {
                        ttl[node[z][i]]=ttl[z]-1;
                        q.push(node[z][i]);
                    }
                }
            }

            int counter=0;
            for(it=ttl.begin(); it!=ttl.end(); it++)
            {
                if(it->second < 0)
                {
                    counter++;
                }
            }

            printf("Case %d: %d nodes not reachable from node %lld with TTL = %d.\n", cas,counter,to,w);

            for(it=ttl.begin(); it!=ttl.end(); it++)
                it->second= -1;

        }

        for(int i=0; i<100000; i++)
        node[i].clear();
        ttl.clear();

    }


    return 0;
}
