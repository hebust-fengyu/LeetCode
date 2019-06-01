/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */


int removeElement(int* nums, int numsSize, int val){
    if(numsSize == 0) return 0;

    int pre_index = 0;
    int cur_index = 0;
    for(;cur_index < numsSize; ++cur_index){
        if(nums[cur_index] != val){
            nums[pre_index++] = nums[cur_index];
        }
    }
    return pre_index;
}



