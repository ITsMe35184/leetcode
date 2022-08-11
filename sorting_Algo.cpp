#include<iostream>
using namespace std;

int insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
       for(j=i-1;j>=0;j--){              // we can while loop to skip break  
            if(arr[j]>=temp){                 //while(j>=0 && arr[j]>=temp)arr[j+1]=arr[j]; j--   
                arr[j+1]=arr[j];

            }
            else {
                break;
            }
           
        }
        arr[j+1]=temp;
    }
}

int bubble_short(int arr[],int n){            // worst case ke liye o(n^2)
         bool check_swap=false;                                    // best case O(n)
    for(int i=0;i<n-1;i++){           
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){                        // inplace  -->> without extra space . koi extra space use na kare 
                 swap(arr[j],arr[j+1]);                //  stable   // same order m aye  . order perjarb hona chaiye 
                   check_swap=true;
             }
        }
        if(check_swap==false) break;
    }
}

int selection_short(int arr[],int n){   // for all case  o(n^2)  n * n compn
    for(int i=0;i<n-1;i++){
        int index=i;
                                             //  not stable but we can make stable 
        for( int j=i+1; j<n; j++){
            if(arr[index]>arr[j]) index=j;
             swap(arr[index],arr[i]);
        }
        
    }

}

int main(){
    
    int arr[]={5,3,4,6,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
     insertion_sort(arr,n);

    for(int i :arr){
        cout<<i<<" ";
    }
}
