/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int *array = malloc(sizeof(int) * (n + m));
    int index = 0;
    int n1 = 0, n2 = 0;
    while(n1 < m && n2 < n){
        
            array[index++] = nums1[n1] < nums2[n2] ? nums1[n1++] : nums2[n2++];
        
    }
    while(n2 <n){

        array[index++] = nums2[n2++];
    }
    while(n1 < m){
       
        array[index++] = nums1[n1++];
    }
    memcpy(nums1, array, index * sizeof(int));
}



