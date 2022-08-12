   
//using sorting   --> nlogn


class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())return false;
       sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        return false;
    }
};

// using freq array ---> o(n)  s.c-->O(1) as only 26 size ;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())return false;
     
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0)return false;
        }
        return true;
    
    }
};



//  explained --->>>>  same as above 

bool vaild_Anagram(string str1,string str2){   
  int count[26]={0};
   for(int i=0;i<str1.length();i++){
     char ch=str1[i];
      int index=ch-'a';   //index find kare ge 
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
