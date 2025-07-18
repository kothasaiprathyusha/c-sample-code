#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<int>s;
for(int i=1;i<=10;i++){
s.insert(i);
}
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";

}
cout<<endl;
int n=2;
if(s.find(2)!=s.end()){
    cout<<n<<"  present int the unorderd set ";
}
s.erase(s.begin());
}