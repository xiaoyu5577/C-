#include<stdio.h>
#include<string.h>
void my_strcat(char *dest,const char *src){
    int i = 0;
    int j = 0;
    while(dest[i] != '\0'){
        i++;
    }
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
int main(){
    char dest[50] = "hello";
    my_strcat(dest, " world");
    printf("[%s]\n", dest);                  // 期望 [hello world]

    char dest2[50] = "";
    my_strcat(dest2, "abc");
    printf("[%s]\n", dest2);
    return 0;                 // 期望 [abc]
}