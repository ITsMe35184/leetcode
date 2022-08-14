class Solution {
public:
    bool isPalindrome(int x) {
        
        
    //TLE 
//         if(x<0)return 0;
//         vector<int>ans;
//         while(x!=0){
//            int y=x%10;
//             ans.push_back(y);
//             x=x/10;
//         }
        
//         int i=0;
//         int j=ans.size()-1;
//         while(i<j){
//        if(ans[i]^ans[j]!=0)
//            return 0;
//         }
//         return 1;
         
     //Appr--->2
     
        if(x<0)return 0;
        
         int y=x;
         long long rev=0;
         while(x!=0){
          rev =rev *10 + x%10;
             x%10;
             
             x=x/10;
         }
        if(y==rev)return 1;
        else return 0;
            
    }
};
