class Solution {
public:
    
 bool search(vector<vector<int>>arr,int target){
   int n=arr.size();
   int m = arr[0].size();
     
        // when matrix is empty 
       if(!n)return 0;
     
     int start=0;
     int end=(n*m)-1;
     
     int mid=start+(end-start)/2;
     while(start<=end){
         if(arr[mid/m][mid%m]==target){
            return 1;
         }
         if(arr[mid/m][mid%m]<target){
             start=mid+1;
         }
         else{        //arr[mid/m][mid%m]>target  end=mid-1
                 end=mid-1;
         }
             mid=start+(end-start)/2;
     }
     return 0;
 }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
     
          return search(matrix,target); 
        
    }
};
