class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int low=0;
       int mid=0;
       int high=n-1;
       while(mid<=high){
           if(arr[mid]==0){
               swap(arr[mid],arr[low]);
               
               mid++;
               low++;
           }
           
           else if(arr[mid]==1){mid++;}
           
           else {swap(arr[mid],arr[high]);
           high--;}
       }
    }
       
    
};


//Approach 2

void Move_0_1_2(int ar1[],int n1){ 
           int one=0,two=0, zero=0;
           for(int i=0 ; i<n1 ;i++){
             if(ar1[i]==0){
               zero++; 
             }
             else if(ar1[i]==1){
               one++;
             }
             else {
               two++;
             }
             
           }
           int i=0;
           while(zero!=0){
             ar1[i]=0;
             zero--;
             i++;
          
           }   
            while(one--){
              ar1[i]=1;
               
              i++;
            }    
            while(two--){
              ar1[i]=2;
              i++;
            }    

         }
