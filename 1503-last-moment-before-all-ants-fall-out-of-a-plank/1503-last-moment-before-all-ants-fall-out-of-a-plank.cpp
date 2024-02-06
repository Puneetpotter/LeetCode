class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // Check if vectors are not empty before sorting
        if (!left.empty()) {
            sort(left.begin(), left.end());
        }
        if (!right.empty()) {
            sort(right.begin(), right.end());
        }
        
        // Check if vectors are not empty before accessing elements
        int leftLast = (!left.empty()) ? left.back() : 0;
        int rightFirst = (!right.empty()) ? right[0] : n;
        
        // Return the maximum of the last element in the left vector and the difference between n and the first element in the right vector
        return max(leftLast, n - rightFirst);
    }
};
