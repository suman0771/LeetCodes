class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x){
            if(res>INT_MAX/10 || res<INT_MIN/10)
                return 0;
            res=res*10+x%10;
            x/=10;
        }
        return res;
    
//         int num=0;
//         if(x!=0){
//             while(x!=0){
//                 int rem=x%10;
//                 if(num>INT_MAX/10 || num<INT_MIN/10) return 0;
//                 num=num*10+rem;
//                 x/=10;
            
//             }
//         }
//             return num;
        
        }
};