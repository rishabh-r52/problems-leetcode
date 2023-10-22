#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size()-1;
    int index = nums.size();
    while(low<=high){
        int mid = low + ((high - low) / 2);
        if(nums[mid] == target){
            index = mid;
            break;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            index = mid;
            high = mid - 1;
        }
    }
    return index;
}