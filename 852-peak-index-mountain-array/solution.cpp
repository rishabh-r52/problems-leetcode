#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int low = 1, high = arr.size()-2;
    // int index = -1;
    while(low<=high){
        // 8 5 4 2 1
        int mid = low + ((high - low) / 2);
        // mid = 0 + (4-0)/2 = 4/2 = 2 | high = 4 | low = 0
        // arr[mid-1] = 5 | arr[mid] = 4 | arr[mid+1] = 2 | high = 1
        // mid = 0 + (1-0)/2 = 1/2 = 0.5 = 0
        // arr[mid-1] = OOB | arr[mid] = 8 | arr[mid+1] = 5 | Out of bounds

        // int mid = high + ((low - high) / 2);
        // mid = 4 + (0-4)/2 = 4 - 4/2 = 4 - 2 = 2 | high = 4 | low = 0
        // arr[mid-1] = 5 | arr[mid] = 4 | arr[mid+1] = 2 | high = 1
        // mid = 1 + (0-1)/2 = 1 - 1/2 = 0.5 = 0
        // arr[mid-1] = OOB | arr[mid] = 8 | arr[mid+1] = 5 | Out of bounds

        // Why does the second one work?
        
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if (arr[mid-1] < arr[mid]){
            // index = mid;
            low = mid + 1;
        }
        else if (arr[mid+1] < arr[mid]){
            // index = mid;
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    
}