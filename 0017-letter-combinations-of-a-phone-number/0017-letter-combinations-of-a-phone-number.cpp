class Solution {
public:
    void solve(string digits,int index,string current,vector<string>& ans){
        if(index == digits.length()){
            ans.push_back(current);
            return;
        }
        string phone [10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string letters =  phone[digits[index]-'0'];
        for(char ch : letters){
            solve(digits,index+1,current+ch,ans);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector <string> ans;
        if(digits.empty()){
            return ans;
        }
        solve(digits,0,"",ans);
        return ans;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna