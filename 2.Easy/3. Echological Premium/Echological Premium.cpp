/*
*
* Program Name: Echological Premium
* Details: Uva super easy 3
* Solved By: Liverwort
* Date: 22.6.16
*
*/

#include<iostream>


int main()
{
    using namespace std;

    int a,b,c,t,f,i,s;

    cin>>t;

    while(t--)
    {
        cin>>f;

        s=0;

        for(i=0; i<f; i++)
        {
            cin>>a>>b>>c;
            s=s+(a*c);
        }

        cout<<s<<"\n";

    }


    return 0;
}

