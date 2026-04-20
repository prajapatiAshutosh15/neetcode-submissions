class Solution {
public:
    int hammingWeight(uint32_t n) {
           uint32_t ans=0;
           while(n){
            ans+=n&1;
            n>>=1;
           } 
           return ans;
    }
};
