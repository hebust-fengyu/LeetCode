/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */


long long rev(int *x){
    long long i = 0;
    while(*x){
        i = i * 10 + *x % 10;
        *x /= 10;
    }
    return i;
}

int reverse(int x){
    long long l = rev(&x);
    if(l > INT32_MAX || l < INT32_MIN) return 0;
    else return l;
}



