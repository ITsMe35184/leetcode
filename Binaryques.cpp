#include<bits/stdc++.h>
using namespace std; 


// void ro(int x){
         
//          int arr[1000]={0};
//         int count=10;
//          for(int i=1; i<x;i++ ){
//             arr[i]=count;
//             count++;
//          }
//         for(int i :arr){
//             cout<<i<<" ";
//         }
// }
 
 double acc(int number,int per,int n){
    double ans=number;
    double factor=1;
    for(int i=0;i<per;i++){
      factor=factor/10;
      for(double j=ans;j*j<n;j=j+factor){
        ans=j;
      }
    }
    return ans;
 }

long long int sqrt(int n){
       int start=0;
       int end=n;
       int ans=-1;
       int mid=start+(end-start)/2;
       while(start<=end){

        if(mid*mid==n){ return mid;}
        if(mid*mid<n){
            ans= mid;
            start=mid+1;
        }
    else{
          end=mid-1;
       }
        mid=start+(end-start)/2;
       }
      return ans;
    }

 int pivotelment(int arr[],int n){
     int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end) 
    {
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    } 
    return end;
 }

int peakelement(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        // if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        //     return arr[mid];
        // }
        if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
  //total occuremce=last-first+1;
int lastoccurence(int arr[],int n ,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        
        if(arr[mid]==target){
            ans=mid;
           start=mid+1;
            }
      else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
     } 
     return ans;

}

int firstoccurence(int arr[],int n,int target ){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
            }
       if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
     } 
     return ans;
}

int valueindex(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    cout<<mid<<endl;
    while(start<=end){
        if(arr[mid]==mid){
            return mid;
            }
         if(arr[mid]>mid){
            end=mid-1;
        }
        else{
           start=mid-1;
        }
        mid=start+(end-start)/2;
        
    } 
    return -1;   
}

int binarysearch(int arr[],int start ,int end,int target){
    // int start=0;
    // int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(mid==target) return mid;
        if(mid<target){
            start=mid+1;            //arr[mid] hoga
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
}
 
int searchinroated(int arr[],int n,int target){
    int pivot=pivotelment(arr,n);
    if(target>=arr[pivot]&&target<=arr[n-1]){
    return binarysearch(arr,pivot,n-1,target);}

else {
           return binarysearch(arr,0,pivot-1,target);
}
}

int main(){
// int target;
// cin>>target;
  int arr[]={0,1,2,2};//{1,2,3,3,5,6};
   int n=sizeof(arr)/sizeof(arr[0]);
  // cout<<binarysearch(arr,n,target);
     //cout<<valueindex(arr,n);
//cout<<lastoccurence(arr,n,target);
//    int first=firstoccurence(arr,n,target);
//    cout<<" "<<last-first+1;
  // cout<<peakelement(arr,n);
  // cout<<pivotelment(arr,n);
  //cout<<searchinroated(arr,n,target);
//  int number=sqrt(target);
//  int per=3;
 //cout<<number;
 //cout<<acc(number,per,target);

 int y=10;
 //ro(y);
}
