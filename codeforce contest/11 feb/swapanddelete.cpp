#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--){
string s;
cin>>s;
int m=0,n=0;
for(int i=0;i<s.size();i++){
if(s[i]=='1')
m++;
else
n++;}
for(int i=0;i<s.size();i++){
if(s[i]=='1')
{
if(n>0)
n--;
else
break;}
else{
if(m>0)
m--;
else break;}}
cout<<m+n<<endl;}
	return 0;
}