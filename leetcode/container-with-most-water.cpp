/*
 * container-with-most-water.cpp
 *
 *  Created on: 23-Jul-2021
 *      Author: agamk
 */


#include <vector>
using namespace std;

class Solution {
public:

    int maxArea(vector<int>& height) {
        int result = 0;
        int index1 = 0;
        int index2 = height.size()-1;
        while(index1<index2){
            result = max(result,(index2-index1)*min(height[index1],height[index2]));
            if(height[index1] < height[index2]){
                index1++;
            }
            else{
                index2--;
            }
        }
        return result;
    }
};


