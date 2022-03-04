#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(int n,string s,string h,string d){
  if(n == 1){
    cout<<"MOVE "<<s<<" "<<d<<endl;
    return;
  }
  solve(n-1,s,d,h);
  cout<<"MOVE "<<s<<" "<<d<<endl;
  solve(n-1,h,s,d);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;cin>>n;
    solve(n,"T1","T2","T3");
    return 0;
}
