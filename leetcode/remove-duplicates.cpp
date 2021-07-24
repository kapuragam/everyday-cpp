/*
 * remove-duplicates.cpp
 *
 *  Created on: 24-Jul-2021
 *      Author: agamk
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

	// 12 milliseconds
    int removeDuplicatesWithSTL(vector<int>& nums) {
	    return std::distance(nums.begin(), std::unique(nums.begin(),nums.end()));
    }

    // 504 milliseconds
    int removeDuplicatesNoob(vector<int>& nums) {
            vector<int> indicesToBeRemoved;
            if(nums.size() <= 1){
                return nums.size();
            }
            int currentNumber = nums[0];
            for(int i = 1; i < nums.size(); i++){
                if(nums[i] == currentNumber){
                    indicesToBeRemoved.push_back(i);
                }
                else{
                    currentNumber = nums[i];
                }
            }
            for(int j = 0; j < indicesToBeRemoved.size(); j++){
                nums.erase(nums.begin() + indicesToBeRemoved[j] - j);
            }
            return nums.size();
        }

};
