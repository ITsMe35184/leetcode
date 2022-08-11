#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;    






                    void non_repeat_element(int ar1[],int n1){  
                             bool count;
                             
                       for(int i=0; i<n1;i++){ 
                         count=false;
                         for(int j=0;j<=n1 ;j++){

                              if(j!=i && ar1[i]==ar1[j]){
                                count=true;
                                break;
                              }

                         }
                         if(count==false)
                              {
                                cout<<ar1[i];
                                break;
                         }
                    }
                    }
                        
                      


                      void repeat_element(int ar1[],int n1){  
                             int count=0;
                       for(int i=0; i<n1;i++){ 
                         for(int j=i+1 ;j<n1 ;j++){
                         if(ar1[i]==ar1[j]){
                           cout<<ar1[i]<<" " ;
                             count++;
                              break;
                         }
                           
                       }
                        if(count==1){
                          break;
                        }
                       }
                      }


                    int min_swap(int ar1[],int n1,int k){
                          
                          int good=0;
                          int bad=0;
                       for(int i=0;i<n1 ; i++){

                         if(ar1[i]<=k){
                           good++;
                         }
                         }

                         for(int i=0 ; i<good; i++ ){
                         if(ar1[i]>k){
                           bad++;
                         }
                       }
                    
                   
                           int ans = bad;

                           int i=0;
                           int j = good;
                           while(j<n1){  

                              if(ar1[i]>k){
                                bad--;
                              }
                              if(ar1[j]>k){
                                bad++;
                              }
                                 ans=min(ans, bad);  
                                 ++i;
                                 ++j;
                           }
                        
                          return ans;

                     }



                void Three(int ar1[], int ar2[], int ar3[], int n1	,	int n2, int n3){

                  int i=0;
                  int j=0;
                  int k=0;
                  while(i<n1 && j<n2 && k<n3){

                    if(ar1[i]==ar2[j]  && ar2[j]==ar3[k]){
                      
                      cout<<ar1[i]<<" ";
                     
                      i++;
                      j++;
                      k++;
                    }
                    else if(ar1[i]<ar2[j]){
                      i++;
                    }
                    else if(ar2[j]<ar3[k]){
                    j++;
                    }
                    else
                      k++;
                    
                  }

               }




            void Kadne_algo(int ar1[],int n1){
              int sum=0;
              int start=0,end=0,count=0;
              int ans=INT_MIN;
              for(int i=0; i<n1; i++){
                sum +=ar1[i];
                if(sum < ar1[i])
                {
                  sum=ar1[i];
                  count=i;
                }

                if(sum>ans){
                  ans=sum;
                  start = count;
                      end = i;
                }
                

                
               
                
              }
              for (int i = start; i <= end; i++) {
        cout << ar1[i]<<" "; 
              }
             cout<< endl <<ans;

            }

    
             void Sum_Pair(int ar1[],int n1 ,int target){
                 int i=0;
                 for(i=0; i<n1; i++){
                   if(ar1[i]+ar1[i+1]==target){
                     cout<<ar1[i]<<" "<< ar1[i+1];
                     break;
                   }
                 }
             }
/* int countpair(int arr[], int n,int sum){ 
      int i=0;
      int j=n-1;
      int ans=0;
      int k=0;
       while(i<j){
        k=arr[i]+arr[j];
        if(k==sum){
            j--;
            i++;
            ans+=1;
        }
            else if(k>sum){
                j--;
            }
            else {
                i++;
            }
        
       }
         
         if(ans==0)return -1;
          else return ans;

}
*/


                

            void check_duplicate(int ar1[], int n1){
             sort(ar1 , ar1 + n1);
             for(int i=0; i<n1; i++){
                       if(ar1[i]==ar1[i+1]){
                         cout<<ar1[i]<<" ";
                       }
                        
             }

            }


                void Cyclic_Rotate(int ar1[] ,int n1){
                  int i=0;
                  int j=n1-1;
                  for(i=0;i<n1;i++){
                         swap(ar1[i],ar1[j]);
                  }
                }

                 void Union_sort_array(int ar1[],int n1,int ar2[],int n2){
                   int i=0;
                   int j=0;
                     
                     while(i<n1 && j<n2){
                       if(ar1[i]==ar2[j]){
                        if(ar1[i] !=ar1[i-1]){
                         cout<<ar1[i]<<" ";
                        }
                         i++;
                         j++;
                       }
                       if(ar1[i]<ar2[j]){
                         if(ar1[i] !=ar1[i-1]){
                         cout<<ar1[i]<<" ";
                         }
                         i++;
                       }
                       else if(ar2[j]<ar1[i]) {
                       if(ar2[j] !=ar2[j-1]){
                       cout<<ar2[j]<<" ";
                       }
                       j++;
                     }
                     }
                      while(i<n1){
                              cout<<ar1[i]<<" ";
                                i++;
                               }
                    while(j<n2){
                             cout<<ar2[j]<<" ";
                             j++;
                            }
                            }


            void Intersection(int ar1[],int n1,int ar2[],int n2){

                  int i=0;
                  int j=0;
                  while(i<n1 && j<n2){

                    if(ar1[i]==ar2[j]){
                      cout<<ar1[i]<<" ";
                      i++;
                      j++;
                    }
                    if(ar1[i]<ar2[j]){
                      i++;
                    }
                    else if(ar2[j]<ar1[i]){
                    j++;
                    }
                  }

            }
             
           
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



          int Move_Neg(int ar1[], int n1){
               int i=0;
               int j=0;
               for(i=0;i<n1;i++){
                    if(ar1[i]<0){
                      swap(ar1[i],ar1[j]);
                      j++;
                    }
               }
            }

            bool Check_Palidroma(int ar1[], int n1)
            {
                int i = 0;
                int j = n1-1;
                while(i!=j ){
                    if(ar1[i]==ar1[j]){
                        i++;
                        j--;
                    }
                    else



                        return false;
                }
                 return true;
                
            }        


          void Reverse_Array(int ar1[] , int n1){
            int i=0;
             int j =n1-1;
             while(i<j){ //i<=j also work center value swap with itself 
                swap(ar1[i],ar1[j]);
                    
                //  int temp = ar1[i];
                //   ar1[i]=ar1[j];
                //   ar1[j]=temp;
                 
               i++;
               j--;
             }
          }
        
         int main(){    
                        int target=4;
                        int k=3;
                        int ar1[]={1, 5, 3, 4, 1, 5, }; //-2,1,-3,4,-1,2,1,-5,4   1, 5, 10, 20, 40, 80
                       int ar2[]={1, 5, 10, 20, 40, 80};
                       int ar3[]={1, 5, 10, 20, 40, 80};

                          int n1 = sizeof(ar1)/sizeof(ar1[0]);
                          int n2 = sizeof(ar2)/sizeof(ar2[0]);
                          int n3 =sizeof(ar3)/sizeof(ar3[0]);
            
             
                         // Reverse_Array(ar1,n1);   
                         //cout <<   Check_Palidroma(ar1,n1);
                         // Move_Neg(ar1,n1);
                        // Move_0_1_2(ar1,n1);
                        // Intersection(ar1,n1,ar2,n1);
                        //Union_sort_array(ar1,n1,ar2,n1);
                        //Cyclic_Rotate(ar1 , n1);
                        //check_duplicate(ar1,n1);//In N+1 array 
                        //Sum_Pair(ar1,n1,target);
                       // Kadne_algo(ar1,n1);
                       // Three(ar1, ar2, ar3, n1, n2, n3);
                       //cout<< min_swap(ar1,n1,k);
                      // repeat_element(ar1,n1);
                      //non_repeat_element(ar1,n1);


                // for(int i = 0; i<n1; i++)
                
                //  {  
                //        cout<<ar1[i]<<" ";
                      
                //       }


                   return 0;
         }             