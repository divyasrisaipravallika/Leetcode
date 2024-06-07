class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        string result;
        int i = 0;
        
        while (i < sentence.size()) {
            if (sentence[i] == ' ') {
                result += ' ';
                i++;
                continue;
            }
            
            int start = i;
            while (i < sentence.size() && sentence[i] != ' ') {
                i++;
            }
            
            string word = sentence.substr(start, i - start);
            string prefix;
            
            for (int j = 1; j <= word.size(); ++j) {
                prefix = word.substr(0, j);
                if (dict.count(prefix)) {
                    break;
                }
            }
            
            if (!result.empty() && result.back() != ' ') {
                result += ' ';
            }
            
            result += prefix;
        }
        
        return result;
    }
};
