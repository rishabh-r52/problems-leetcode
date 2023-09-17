import java.util.HashMap;

class solution {
    public static void main(String[] args){
        int[] nums = {2,7,11,15};
        int target = 9;
        int[] ans = twoSum(nums, target);

        // for(int i : ans){
        //     System.out.println(i);
        //     System.out.println();
        // }

        System.out.println(ans[0] + " " + ans[1]);
    }


    public static int[] twoSum(int[] nums, int target) {
        // ------------------Brute Force-----------------
        
        // for(int i=0;i<nums.length;i++){
            //     for(int j=0;j<nums.length;j++){
                //         if(i!=j){
                    //             int sum = nums[i] + nums[j];
                    //             if(sum == target){
                        //                 int[] ans = {i, j};
                        //                 return ans;
                        //             }
                        //         }
                        //     }
                        // }
                        // int[] ret = {0,0};
                        // return ret;

        // ------------------Hash Map Approach-----------------

        int[] ans = new int[2];
        ans[0] = ans[1] = -1;
                        
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();

        for(int i=0; i<nums.length; i++){
            int num1 = nums[i];
            int num2 = target-num1;

            if(map.containsKey(num2)){
                ans[0] = i;
                ans[1] = map.get(num2);

                return ans;
            }

            map.put(nums[i],i);
        }
        return ans;
    }
}