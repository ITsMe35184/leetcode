class Solution {
public:
   int findDuplicate(vector<int>& nums) {
          int n = nums.size();
              int ans = 0;
         for(int i=0; i<n; i++){
            int index=nums[i]%n;
            nums[index]+=n;
         }
         for(int i=0; i<n; i++){
             if(nums[i]/n>=2){
                 ans=i;
             }
         }
         if(ans==0) return -1;
                    return ans;
    }
};


//appp --->>> 2

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int n = nums.size();
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n - 1; i++) {
    if (nums[i] == nums[i + 1]) {
      return nums[i];
    }
   }
  
    return 0;
    }
};
