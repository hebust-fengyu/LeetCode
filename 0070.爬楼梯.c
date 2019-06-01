/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */


int climbStairs(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    int old = 1;
    int new = 2;
    int tmp;
    for(int i = 3; i != n + 1; ++i){
        tmp = old + new;
        old = new;
        new = tmp;
    }
    return new;
}



