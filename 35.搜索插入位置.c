/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */


int searchInsert(int* nums, int numsSize, int target){
    int insert_index = -1, target_index = -1;
    for(int i = 0; i < numsSize; ++i){
        if(nums[i] > target && insert_index == -1){
            insert_index = i;
        }
        else if(nums[i] == target && target_index == -1){
            target_index = i;
        }
    }
    int ret_index = 0;
    if(insert_index == -1 && target_index == -1){
        ret_index = numsSize;
    }
    else if(target_index == -1){
        ret_index = insert_index;
    }
    else{
        ret_index = target_index;
    }
    return ret_index;
}



