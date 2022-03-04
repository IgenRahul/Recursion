#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void f(int n1,int n0,int n,string op){
    if(n1+n0 == n){
        ans.push_back(op);
        return ;
    }
    string op1  = op + '1';
    string op2 = op +'0';
    f(n1+1,n0,n,op1);
    if(n1 != n0){
        f(n1,n0+1,n,op2);
    }
}
void solve(int n){
   f(0,0,n,"");
   for(auto i:ans) cout<<i<<endl;
}
int main(){
    int n;cin>>n;
    solve(n);
    return 0;
}