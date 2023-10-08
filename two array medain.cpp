#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n+m,0);
    for(int i=0;i<n+m;i++)
    {
        cin>>v[i];
    }
    float s = 0;

    sort(v.begin(),v.end());

    int j = v.size();

    if(j%2!=0)
    {
        cout<<v[j/2];
    }
    else
    {
        int k = v[j/2];
        int l = v[j/2-1];
        cout<<(float)(l+k)/2;
    }
}
