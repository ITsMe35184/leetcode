

int large_sum_subarry(int arr[],int n){
 int bestsum =INT_MIN;
    int currentsum=0;
    for(int i=0; i<n;i++
    ){ 
      int x = currentsum+arr[i];
      currentsum=max(arr[i],x); 
      bestsum=max(bestsum,currentsum);
    }
    
    return bestsum;
 
}

//to print sub aaray
  //  int meh=0;
  //  int msf=INT_MIN;
  //  int start=0;
  //  int end=0;
  //  int s=0;
  //  for(int i =0 ; i<n; i++){
     
  //    meh+=arr[i];
  //    if(msf<meh){msf=meh; start=s; end=i;}
  //    if(msf<0){meh=0; s=i+1;}
  //  }
  //       for(int i=start ; start<=end;start++){
  //         cout<< arr[start]<<" ";
  //       }
  // return msf;
