#include<iostream>
#include<vector>
using namespace std;

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

int colsum(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
    int starting_col=0;
    int sum=0;
    int ans=0;

    
        while(starting_col<col){
        for(int i=0;i<row;i++){
                sum+=arr[i][starting_col];
        }
            starting_col++;
            ans=max(ans,sum);
        }
        return ans;
    }


void wave(vector<vector<int>>&arr){
    int row=arr.size();
    int col=arr[0].size();
    int count=row*col;
    int starting_row=0;
    int ending_col=col-1;
    int starting_col=0;
       
       while(count!=0){
    for(int i=starting_col;i<=ending_col;i++){
        cout<<arr[starting_row][i]<<" ";
        count--;
    }
    starting_row++;

    for(int i=ending_col;i>=starting_col;i--){
        cout<<arr[starting_row][i]<<" ";
        count--;
    }
     starting_row++;
       }
}


      int liner(int arr[3][4] ,int n ,int row,int target){
        for(int i=0 ; i<row;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==target){
                    cout<<" found " <<arr[i][j];
                }
            }
        }
      }

int sumc(int arr[][3] ,int col ,int row ){  
    for (int i =0; i<col;i++){ int sum=0;
            for(int j=0;j<row;j++){
           sum+=arr[j][i];
        //    cout<< arr[i][j]<<"  "<<endl;
        }
        cout<<" "<<sum ;
    }
     
    }


    void trans(vector<vector<int>> &arr){
        int row=arr.size();
                 int col=arr[0].size();
    //     for(int i=0;i<row;i++){
    //         for(int j=0 ;j<i;j++){ //int j=1 ;j<i;j++
    //             swap(arr[i][j],arr[j][i]);
    //         }
    //    }
    //             
              // for(int i=0;i<row/2;i++){ 
                //     for(int j=0;j<col;j++){
                //         swap(arr[i][j],arr[row-1-i][j]);
                //     }

                // }
                for(int i=0;i<col;i++){
 for(int j=0 ;j<row/2;j++){
               swap(arr[i][j],arr[i][row-1-j]);
               
 }
        }
    }

    int zeros(vector<vector<int>> &arr ){
        int n=arr.size();
       int m=arr[0].size();
       vector<vector<int>>temp=arr;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
        if(temp[i][j]==0){
            if(i+1< n){
                   arr[i][j]+=temp[i+1][j];
                   arr[i+1][j]=0;
            }
            if(i-1>=0){
                arr[i][j]+=temp[i-1][j];
                arr[i-1][j]=0;
            }
            if(j+1 <m ){
                arr[i][j]+=temp[i][j+1];
                arr[i][j+1]=0;
            }
            if(j-1>=0){
                 arr[i][j]+=temp[i][j-1];
                 arr[i][j-1]=0;
            }
        }
            }
     }
    }

int main(){
   
    int target = 2;
    vector<vector<int>> arr={{1,2}};
                // {{1, 2, 3, 4},
                //  {5, 6, 7, 8}, 
                //  {9, 10, 11, 12},
                //  {13, 14, 15, 16}};

                 
          
    //        trans(arr);
    //     // zeros(arr);
    //    cout<<endl;

    // for (vector<int>i :arr) 
    // {
    //     for (int j :i)
    //     {
    //         cout << j<< " ";
    //     }    
    //     cout << endl;
    // }
  

//cout<<colsum(arr);
 cout<< search(arr,target);
}