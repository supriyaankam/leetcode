class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        vector<int> ans(101,0);
        int n = seats.size();
        for(int i = 0 ; i < n ; i++){
            ans[seats[i]]++;
            ans[students[i]]--;
        }
        int res = 0;
        int current = 0;
        for(int i : ans){
            res += abs(current);
            current += i;
        }
        return res;
    }
};