/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */


int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0 || numsSize == 1) return numsSize;
    int pre_index = 0;  
    int cur_index = 1;
    for(;cur_index < numsSize; ++cur_index){
        if(nums[pre_index] == nums[cur_index]){
            continue;
        }
        nums[++pre_index] = nums[cur_index];
    }
    return ++pre_index; 
}



