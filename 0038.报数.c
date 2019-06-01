/*
 * @lc app=leetcode.cn id=38 lang=c
 *
 * [38] 报数
 */


char * countAndSay(int n){
    if(n == 1) return "1\0";
    char *c = countAndSay(n - 1);
    char *ret = malloc(sizeof(char) * strlen(c) * 2 + 1);
    int count = 1, index = 0;
    char x = c[0];
    char szbuffer[2];
    for(int i = 1; i < strlen(c) + 1; ++i){
        if(c[i] == x){
            ++count;
        }
        else{
            sprintf(&szbuffer, "%d", count);
            ret[index++] = szbuffer[0];
            ret[index++] = c[i - 1];
            x = c[i];
            count = 1;
        }
    }
    ret[index] = '\0';
    return ret;
}



