#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> map;
      vector<int> pairs;
      for(int i = 0; i < nums.size(); i++) {
          int complement = target - nums[i];
          if(map.find(complement) != map.end()) {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
    };
int
main ()
{
    vector<int> nums = {1, 2, 3, 4,7};
    int target = 3;
    vector<int> rr = twoSum(nums, target);
    for (int i=0; i<rr.size(); i++) {
        cout<<rr[i];
    }
}