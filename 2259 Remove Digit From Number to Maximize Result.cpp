class Solution {
public:
    string removeDigit(string number, char digit) {
//         int i = 0;
//         for (; i + 1 < size(number); ++i) {
//             if (digit == number[i] && number[i] < number[i + 1]) {
//                 break;
//             }
//         }
//         if (i + 1 == size(number)) {
//             for (i = size(number) - 1; i >= 0; --i) {
//                 if (number[i] == digit) {
//                     break;
//                 }
//             }
//         }
//         number.erase(i, 1);
        
        
//         return number;
        
        
        
      string ans="";
       string temp=number;
        int n =number.length();
       
        for(int i=0;i<n;i++){

        if(temp[i]==digit){
         temp.erase(temp.begin()+i);
            
           ans=max(ans,temp);
            temp=number;
         }
        }
     return ans;
    }
};
