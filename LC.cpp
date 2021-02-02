int comp(const vector<int>&lhs, const vector<int>&rhs){return lhs[0]>rhs[0] || (lhs[0] == rhs[0] && lhs[1] < rhs[1]);}
class Solution {
private:
    vector<vector<int>> result;
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),comp);
        for(auto &person:people)
            result.insert(result.begin() + person[1], person);
        return result;
    }
};