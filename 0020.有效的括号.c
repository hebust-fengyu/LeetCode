/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */


bool isValid(char * s){
    if(strlen(s) % 2) return false;
    char *c = malloc(sizeof(char) * strlen(s));
    memset(c, 0, sizeof(char) * strlen(s));
    int count = 0;
    bool flag = true;
    while(*s && flag){
        if(*s == '('){
            c[count++] = ')';
        }
        else if(*s == '{'){
            c[count++] = '}';
        }
        else if(*s == '['){
            c[count++] = ']';
        }
        else{
            if(count <= 0 || *s != c[--count]){
                flag = false;
            }
        }
        ++s;
    }
    return count ? false: flag;
}



