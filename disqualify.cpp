#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
    int res=1,steps=1,temp=n;
    while(temp>1){
        if(flag==true || (temp&1)) res+=steps;
        steps*=2;
        temp/=2;
        flag=!flag;
    }
    cout<<res;
}
