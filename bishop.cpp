#include <iostream>
using namespace std;
 
int main() {
int t;
string s;
cin>>t;
while (t--)
{
int l=0;	
for (int i=1;i<=8;i++)
{
	
	cin>>s;
	if (l==0)
	{
for (int j=0;j<=5;j++)
if  (s[j]=='#' && s[j+1]=='.' && s[j+2]=='#') {l=1;cout<<i+1<<" "<<j+2<<endl;break;}
}
}
}
}
