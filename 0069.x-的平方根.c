/*
 * @lc app=leetcode.cn id=69 lang=c
 *
 * [69] x 的平方根
 */


int mySqrt(int x){
    bool flag = true;
    int i = 1;
    for(; i < x / i + 1; ++i){
        if(i * i == x){
            flag = false;
            break;
        }
    }
    return flag ? --i : i;
}



