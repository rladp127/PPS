// Definition for Employee.
// class Employee {
// public:
//     int id;
//     int importance;
//     vector<int> subordinates;
// };


class Solution {
public:
    int dfs (map<int, Employee*> mp, int id) {
        int ap = mp[id]->importance;
        for (auto i:mp[id]->subordinates)
            ap += dfs(mp, i);
        return ap;
    }
    int getImportance(vector<Employee*> employees, int id) {
        map<int, Employee*> mp;
        for (auto i:employees) mp[i->id] = i;
        return dfs(mp, id);
    }
};