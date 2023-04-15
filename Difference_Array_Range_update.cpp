/*
https://www.geeksforgeeks.org/difference-array-range-update-query-o1/amp/
*/
#include <bits/stdc++.h>
#define endl  '\n'
#define NFS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define input(v) for(auto &i : v)cin>>i;
#define ll long long 
using namespace std;

void solve(){
  
 ll n;
 cin>>n;
 vector<int>arr(n);
 
 input(arr);
 vector<int>temp(n+1,0); // as we update r --> r + 1; and its 0 based indexing 
 
 ll q;

 cin>>q;   // querys to perform 
 
 while(q--){
 ll l,r,val;
 cin>>l>>r>>val;  
 
 temp[l]+=val;         // as we can have multiple quires so we have to add on -->l and - mius form (R+1);
 temp[r+1]-=val;
 
}
 
 // after updating all quries take prefix sum of temp or basically runing same type
 //ll sum=temp[0];
 for(ll i=1;i<temp.size();i++){
 	
 	//temp[i]+=sum;
 	
   temp[i]+=temp[i-1];
   
 	//sum=temp[i];
 }
 
 for(auto i: temp)cout<<i<<" ";
 	
 cout<<endl;	
  
 // add this prefix sum to main array 

 for(ll i=0; i<n;i++){
   
   arr[i]+=temp[i];
 }
 
 cout<<endl;
for(auto i: arr)cout<<i<<" ";
  
}
 
int main(){
    
// NFS
  
 solve();
    
    return 0;
}
