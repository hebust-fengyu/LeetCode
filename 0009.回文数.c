/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */


bool isPalindrome(int x){
    if(x < 0) return false;
    int array[15] = {0};
    int index = 0;
    while(x){
        array[index++] = x % 10;
        x /= 10;
    }
    for(int i = 0; i < index - i; ++i){
        if(array[i] != array[index - 1 - i]) return false;
    }
    return true;
}



