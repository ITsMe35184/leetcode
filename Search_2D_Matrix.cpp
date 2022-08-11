   
//   binary search 

class Solution {
public:
    
    bool search2d(vector<vector<int>>arr,int n,int m,int row,int target){
      int start=0;
      int end=m-1;
      int mid=start+(end-start)/2;
     
      while(start<=end){
          if(arr[row][mid]==target){
             
            return true;
          }
          if(arr[row][mid]<target){
            start=mid+1;
          }
          else{
            end=mid-1;
          }
          mid=start+(end-start)/2;
      }
      return false;
}

bool search(vector<vector<int>>arr,int target ){
    int n=arr.size();
    int m=arr[0].size();
   int start=0;
   int end =n-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid][0]==target){
            return true;
        }
        if(arr[mid][0]<target && target<=arr[mid][m-1]){
              int ans= search2d(arr ,n ,m,mid,target);
              return ans;
        }
        if(target<arr[mid][0]){
            end=mid-1;
        }
         if(target>arr[mid][0]){
            start=mid+1;
        }
        mid= start+(end-start)/2;
    }
    return false;
}
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
     
          return search(matrix,target); 
        
    }
};
