#include<stdio.h>
int my_strcmp(const char *s1, const char *s2){
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return s1[i] - s2[i];      // 用 s1[i] 和 s2[i] 得出结果
}
int main(){
    printf("%d\n", my_strcmp("abc", "abc"));   // 0
    printf("%d\n", my_strcmp("abc", "abd"));   // 负数
    printf("%d\n", my_strcmp("abd", "abc"));   // 正数
    printf("%d\n", my_strcmp("abc", "ab"));    //正数
    return 0;   
}