class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<int, string> mp1, mp2;
        for (int i = 0; i < list1.size(); i++) {
            mp1[i] = list1[i];
        }

        for (int i = 0; i < list2.size(); i++) {
            mp2[i] = list2[i];
        }

        vector<string> res;
        int min_sum = INT_MAX;

        for (auto it1 = mp1.begin(); it1 != mp1.end(); ++it1) {
            for (auto it2 = mp2.begin(); it2 != mp2.end(); ++it2) {
                if (it1->second == it2->second) {
                    int sum = it1->first + it2->first;
                    if (sum < min_sum) {
                        min_sum = sum;
                        res.clear();
                        res.push_back(it1->second);
                    } else if (sum == min_sum) {
                        res.push_back(it1->second);
                    }
                }
            }
        }

        return res;
    }
};
