void index( unordered_map<int,int>m,int i,int a,int arr[]){
    int c;
    for(auto i : m){  
        if(i.first==a)
        c=i.second+1;
    }

   // cout<<i;

    for(int j=c;j<=i;j++){
        cout<<arr[j]<<" ";
    }
}

void sumsubarray(int arr[],int n){
    vector<int>prefix(n);
    int sum=0;
    int a=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        prefix[i]=sum;
    }
  unordered_map<int,int>m;
  for(int i=0;i<n;i++){
      if(prefix[i]==0){
          cout<<"subarray";
          break;
      }
      else if(m.find(prefix[i]) !=m.end()){
          cout<<"ELSE EALA  CASE BE H ";
          cout<<endl;
          a=prefix[i];
         index(m,i,a,arr);
      }
      else {
          m[prefix[i]]=i;
          
      }
  }
}
