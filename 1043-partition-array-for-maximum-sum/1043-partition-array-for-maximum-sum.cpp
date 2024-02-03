class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int N = arr.size();

        int dp[N + 1];
        memset(dp, 0, sizeof(dp));
        
        for (int start = N - 1; start >= 0; start--) {
            int currMax = 0;
            int end = min(N, start + k);

            for (int i = start; i < end; i++) {
                currMax = max(currMax, arr[i]);
                // Store the maximum of all options for the current subarray.
                dp[start] = max(dp[start], dp[i + 1] + currMax * (i - start + 1));
            }
        }
        return dp[0];
    }
};