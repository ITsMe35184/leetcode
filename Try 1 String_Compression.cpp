



// partice --->1  incomplete


#include <bits/stdc++.h>

using namespace std;

 int compress(vector<char>& chars) {
        vector<char>ans;
        vector<int>temp;
          int count=1;
         int n=chars.size();
        int i=0;
        int j=1;
        while(i<n && j<=n){
               
              if(chars[i]==chars[j]){
     
                   count++;
              } 
            
             
             else{
              ans.push_back(chars[i]);
               temp.push_back(count);
               count=1;
             }
               
            i++;
            j++;
          }

          for(auto i : temp){
              cout<<i;
          }
        return ans.size()+temp.size();
    }

int main()
{
    vector<char>chars={'a','a','b','b','c','c','c'}; 
    compress(chars);
    return 0;
}
