class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector<int> record;
    int sum = 0;
    for (auto o : operations) {
        if (o == "+") {
            int add1 = record.back();
            int add2 = record[record.size() - 2];
            int sumOfTwo = add1 + add2;
            record.push_back(sumOfTwo);
            sum += sumOfTwo;
        } else if (o == "D") {
            int doublePrev = 2 * record.back();
            record.push_back(doublePrev);
            sum += doublePrev;
        } else if (o == "C") { 
            int subtract = record.back();
            record.pop_back();
            sum -= subtract;
        } else {
            int toadd = stoi(o);
            record.push_back(toadd);
            sum += toadd;
        }
    }
    return sum;
}

};