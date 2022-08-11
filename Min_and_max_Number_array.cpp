int maxno(int arr[] ,int size){
               int maxi=INT_MIN;   
                 for(int i=0;i<size;i++){
                     maxi= max(maxi,arr[i]);
                         }
                     return maxi;
           }

        int minno(int arr[],int size){
            int mini=INT32_MAX;
            for(int i=0;i<size;i++){
                mini=min(mini,arr[i]);
            }
            return mini;
        }

       
        int checkmax(int arr[],int size){
            for(int i=1;i<size;i++){
                  if(arr[0]<arr[i]) arr[0]=arr[i];
            }
            return arr[0];
        }
