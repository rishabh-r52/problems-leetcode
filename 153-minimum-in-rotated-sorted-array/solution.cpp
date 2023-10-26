#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size()-1;
    int ans = arr[0], mid;
    while(low<=high){
        mid = low + ((high-low)/2);
        if(arr[mid] >= arr[0]){
            low = mid + 1;
        }
        else{
            ans = arr[mid];
            high = mid - 1;
        }
    }
    return ans;


    // int n = arr.size();

    // if(n==0){
    //     return arr[0];
    // }

    // if(arr[0] < arr[n-1])
    //     return arr[0];

    // if(arr[n-1] < arr[n-2] && arr[n-1] < arr[0])
    //     return arr[0];

    // int low = 1, high = arr.size()-2, index = -1;
    // // mid = (1) = 13
    // // low = (2), high = (3)

    // // mid = (2) = 15
    // // low = (3), high = (3)

    // // mid = (3) = 17
    // while(low<=high){
    //     int mid = low + (high-low)/2;
    //     if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]){
    //         return arr[mid];
    //     }
    //     else if(arr[0] < arr[mid]){
    //         low = mid+1;
    //     }
    //     else if(arr[0] > arr[mid]){
    //         high = mid-1;
    //     }
    // }

    // return -1;
}

// [4,5,6,7,0,1,2]

// 5 6 7 0 1 2 4
// mid = 0

// 4 5 6   7   0 1 2

// 7   0 1 2 3 4 5 6  ->  if(arr[0]>arr[n-1] && arr[0]>arr[1]) return arr[1]

// 0 1 2 3 4 5 6   7 ->  if(arr[n-1]>arr[n-2] && arr[n-1]>arr[0]) return arr[n-1]