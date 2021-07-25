/*
 * count-bits.cpp
 *
 *  Created on: 25-Jul-2021
 *      Author: agamk
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    unsigned int countSetBits(unsigned int n){
        unsigned int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> result;
        unsigned int flags = -1;

        for(int i = 0; i <= n; i++){
            result.push_back(countSetBits(i));
        }
        return result;
    }
};



