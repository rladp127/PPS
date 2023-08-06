class Solution {
public:
    bool halvesAreAlike(string s) {
        int size = s.size();
        return vowels(s.substr(0, size/2)) == vowels(s.substr(size/2, size/2));
    }
   
    int vowels(string s){
        int ct = 0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            ct++;
        }
        return ct;
    }
   
};