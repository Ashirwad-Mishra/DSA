#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set <int> s(nums.begin() , nums.end());
        int i = 1;
        while(true)
            if (!s.count(i)) return i;
            else i++; 
        return 0;
    }
};

int main()
{
    int n;
    cin >> n;
    vector <int> vec(n);
    for (auto &i : vec) cin >> i;
    cout << Solution.firstMissingPositive(vec);
}