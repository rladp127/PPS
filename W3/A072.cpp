class Solution {
public:
    int dayOfYear(string date) {
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,7));
        int day = stoi(date.substr(8,10));

        int output = 0;
        
        if (year % 4 == 0 && month > 2) {
            if (year % 400 == 0) {
                if (month > 2) output += 1;
            }
            output += 1;
            if (year % 100 == 0) output--;
        }

        for (int i = 0; i < month-1; i++) {
            output += days[i];
        }

        output += day;
        return output;
    }
};