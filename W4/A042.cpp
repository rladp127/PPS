class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> s1;
        stack <char> s2;

        for(int i = 0; i < s.size(); i++){
            s1.push(s[i]);
            if(s1.top() == '#'){
                s1.pop();
                if(!s1.empty())
                    s1.pop();
            }
        }
        for(int i = 0; i < t.size(); i++){
            s2.push(t[i]);
            if(s2.top() == '#'){
                s2.pop();
                if(!s2.empty())
                    s2.pop();
            }
        }

        if(s1.size() != s2.size())
            return false;

        while(!s1.empty() && !s2.empty()){
            if(s1.top() != s2.top())
                return false;
            s1.pop();
            s2.pop();
        }
        return true;
    }
};