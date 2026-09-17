class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        int n = s.length();
        string ans = "";
        for(int i=0;i<n;i++){
            bool replaced = false;
            for(int j=0;i<indices.size();j++){
                if(indices[j]==i){
                    string source = sources[j];
                    if(s.substr(i,source.length())==source){
                        ans +=targets[j];
                        i +=source.length()-1;
                        replaced = true;
                    }
                    break;

                }

            }
            if(!replaced){
                ans += s[i];
            }
        }
        return ans;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna