/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */


char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize == 0) return "";
    char *c = malloc(sizeof(char) * strlen(*strs) + 1);
    strcpy(c, *strs);
    c[strlen(*strs)] = '\0';
    for(int i = 1; i < strsSize && strlen(c); ++i){
        int j = 0;
        for(; j < strlen(c); ++j){
            if(*(*(strs + i) + j) != c[j]){
                c[j] = '\0';
                break;
            }
        }
    }
    return c; 
}



