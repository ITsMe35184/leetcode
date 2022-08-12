#include<bits/stdc++.h>
using namespace std;

//  char flip(char except){
//            if(except=='0')return '1';
//             else return '0';
//         } 
//     int getflip(string s,char except){
//            int count=0;                         
//            for(int i=0;i<s.length();i++){
//                if(s[i]!=except){
//                  count++;
//                }
//                except=flip(except);
//            }
//         return count;
//     }   
// int minmFlips (string s)
// {
//    int ans1=getflip(s,'1');
//         int ans2=getflip(s,'0');     
//         return min(ans1,ans2);
// }


   int minFlips (string s){
    int count=0;
    int count1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && i%2==0 || s[i]=='1' && i%2!=0){
            count++;
        }
        else {
            count1++;
        }
    }
    return min(count,count1)
   }

bool vaild_Anagram(string str1,string str2){
  // sort(str1.begin(),str1.end());
  // sort(str2.begin(),str2.end()); 
   //nlogn +nlogn

  //  if((str1.compare(str2))==0)return true; 
   //using compare function
    // if(str1==str2)return true;
   
    // return false;
 

// --->> Approach --->2   T.c O(n) , S.c O(1);

  int count[26]={0};
  //  for(int i=0;i<str1.length();i++){
  //   count[str1[i]-'a']++;
 // a-a =0 se map h jab b-a hoga --> 1 ;matlab index find kar re h jah par incrment karna h 
  //   count[str2[i]-'a']--;
  //  }  
  //  for(int i=0;i<26;i++){
  //   if(count[i]!=0)return false;
  //  }
  //  return true;
   

for(int i=0;i<str1.length();i++){
  char ch=str1[i];
  int index=ch-'a';
    count[index]++;
}
for(int i=0;i<str2.length();i++){
  char ch=str2[i];
  int index=ch-'a';
    count[index]--;
}

for(int i=0;i<26;i++){
  if(count[i]!=0)return false;
}
return true;
}

void rev(char stb[]){
 int i=0;
 int j=strlen(stb)-1;
     
    while(i<=j){
        swap(stb[i],stb[j]);
        j--;
        i++;
    }
    
}

int getlen(char arr[]){
    int length=0;
    int i=0;
    while(arr[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main(){

   // char sta[10]; //={'a','b'};
     char stb[10]="rohit"; 
    // space, tab ,enter are dilmator.
       rev(stb);
       cout<<stb<<endl;
     
     // strcpy(sta,stb);   
      // stb ki value copy hogi sta m 


   // cout<<strcmp(sta,stb);   
   //   strcmp to comapre two char array ,if equal =0 if not -1 
   // case sentative h matlab ROHIT != rohit  aur jab sub string ho tu 1 return hota h 
    // but jab char array 1 ya string1 small letter m ho aur string2 captial tu complier return 1 jab iska ulta ho tu -1  

   // cout<<" "<<sta<<" "<<strlen(sta); 
    //strlen function to find length

    // string ke case hm custom delimtor be set kar skte h 
      string str;
       cin>>str;  
    // rohit sharma space tk print hoga means rohit print hoga to overcome this we use getline function
     // getline(cin,str,'a');
     // a -->is delimtor

     string str2;
     cin>>str2;
     cout<<vaild_Anagram(str,str2); 
     // cout<<str;
         




}          


