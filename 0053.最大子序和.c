/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */


int maxSubArray(int* nums, int numsSize){
    bool flag = true;
    int sum = 0, max = 0;
    for(int i = 0; i < numsSize; ++i){
        sum += nums[i];
        if(sum > max){
            max = sum;
        }
        if(flag){
            max = sum;
            flag = false;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return max;
}



