class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if ( s.size() != goal.size() ) {
            return false;
        }

        int n = s.size();

        if ( s == goal ) {

            vector <int> temp(26,0);

            for ( int i=0; i<n; i++ ) {

                temp[s[i]-'a'] ++;

                if ( temp[s[i]-'a'] >= 2 ) {
                    return true;
                }
            }

            return false;
        }

        int ind = -1;
        int indx = -1;
        int cnt = 0;
        for ( int i=0; i<n; i++ ) {
            
            if ( s[i] != goal[i] && cnt == 0 ) {
                ind = i;
                cnt ++;
            }

            else if ( s[i] != goal[i] && cnt == 1 ) {
                indx = i;
                cnt ++;
            }

            else if ( s[i] != goal[i] ) {
                cnt ++;
            }

            if ( cnt > 2 ) {
                return false;
            }
        }

        if ( ind == -1 || indx == -1 ) {
            return false;
        }

        swap (s[ind],s[indx]);

        return s == goal;
    }
};