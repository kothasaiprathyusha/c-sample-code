#include<bits\stdc++.h>
using namespace std;
int main(){
int i,n,r;
int sum=0;
cin>>n;
for(i=1;i<=n;i++){
 r=n%10;
  n=n/10;
}
cout<<i;
return 0;
}