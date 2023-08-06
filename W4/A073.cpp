class Solution {
public:
    vector<string> fizzBuzz(int n) {
      vector<string> v;
      if (n == 1) v.push_back(to_string(1));
      else {
            v.push_back(to_string(1));
            v.push_back(to_string(2));
            for(int i=3;i<=n;i++)
                {
                if (i%3==0 && i%5==0) v.push_back("FizzBuzz");
                else if (i%5==0) v.push_back("Buzz");
                else if (i%3==0) v.push_back("Fizz");
                else {
                    v.push_back(to_string(i));
                    }
                }
        } 
            return v; 
    }
};