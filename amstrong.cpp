#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int temp=n;
int sum=0;
  while(n>0)
  {
  int lastdigit=n%10;
  sum=sum+(lastdigit*lastdigit*lastdigit);
   n=n/10;
  }
if(sum==temp){
cout<<"amstrong";
}
else{
cout<<"not amstrong";
}
return 0;
}