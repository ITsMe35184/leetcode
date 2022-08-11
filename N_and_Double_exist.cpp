class Solution {
public:
    bool binarysearch(vector<int>& arr,int start ,int end,int target){
    // int start=0;
    // int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
        return false;
}
    
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         for(int i=0;i<arr.size();i++){
             if(arr[i]>=0  && binarysearch(arr,i+1,arr.size()-1,2*arr[i]))
                 return true;
             if(arr[i]<0 && arr[i]%2==0 &&  binarysearch(arr,i+1,arr.size()-1,arr[i]/2) )
                 return true;
         }
        return false;
    }
};
