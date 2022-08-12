class Solution {
public:
    void remove(string s,string &temp){
    for(int i=0; i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z' || s[i]>='0'&&s[i]<='9')
          temp.push_back(s[i]);
    }
   
}

void vaild(string &temp){
    for(int i=0;i<temp.length();i++){
    if(temp[i]>='A'&&temp[i]<='Z')temp[i]=temp[i]+32;
    }
}

bool check(string &temp){
    bool flag=true;
    int i=0; 
    int j=temp.length()-1;
    while(i<=j){
         if(temp[i]==temp[j]){
             i++;
             j--;
             flag=true;
         }
         else{
             flag=false;
             break;
         }
    }
    if(flag==true)return 1;
     return 0;
}
    
    bool isPalindrome(string s) {
        string temp;
        remove(s,temp);
        vaild(temp);
        return check(temp);
        
        
    }
};
