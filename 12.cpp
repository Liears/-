class Solution {
public:
    int cuttingRope(int n) {
        vector<int> f;
        int ans = 1;
        if(n <= 3){
            return max(n-1,1);
        }
        
        f[1] = 1;
        f[2] = 2;
        f[3] = 3;

        for (int i = 4; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                ans = main(ans,f[j] * f[i-j]);
            }
            f[i] = ans;
        }
        return f[n];
        
        
    }
};