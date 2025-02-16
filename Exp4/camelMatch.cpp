class Solution {
    public:
        vector<bool> camelMatch(vector<string>& queries, string pattern) {
            auto matches = [&](const string& query, const string& pattern) -> bool {
                int i = 0; 
                for (char c : query) {
                    if (i < pattern.size() && c == pattern[i]) {
                        i++;
                    } else if (isupper(c)) {
                        return false;
                    }
                }
                return i == pattern.size();
            };
            vector<bool> result;
            for (const string& query : queries) {
                result.push_back(matches(query, pattern));
            }
            return result;
        }
    };
    