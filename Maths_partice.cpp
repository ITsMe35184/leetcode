 
   bool fast(int a ,int b,int n){
       vector<int>temp;
       while(b<=n){
       int ans =1;
       for(int i=1;i<=b/2;i++){
         ans*=a;   
       }
       if(b%2==0){ temp.push_back(ans*ans);}
        else{ temp.push_back((ans*ans)*a);}
      
       b++; 
   }
//   for(auto &i :temp){
//       cout<<i<<" ";
//   }
    if(binary_search(temp.begin(), temp.end(), n)){
        return 1;
        
    }
    else {
        return 0;
    }
   }

int gcd(int a,int b){
    
    if(a==0)return b;
    
    if(b==0)return a;
    
    while(a!=b){
        if(a>b)a=a-b;
        
          else 
               b=b-a;
    }
    return a;
}
