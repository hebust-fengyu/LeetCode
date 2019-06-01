/*
 * @lc app=leetcode.cn id=242 lang=c
 *
 * [242] 有效的字母异位词
 */


bool isAnagram(char * s, char * t){
    if(strlen(s) != strlen(t)) return false;
    int count_s[26] = {0};
    int count_t[26] = {0};
    for(int i = 0; i < strlen(s); ++i){
        count_s[s[i] - 'a'] += 1;
        count_t[t[i] - 'a'] += 1;
    }
    for(int i = 0; i < 26; ++i){
        if(count_s[i] != count_t[i]) return false;
    }
    return true;


}



