int my_strlen(const char *s){
    int count = 0;
    while(*s != '\0'){
        count++;
        s++;
    }
    return count;
}
int main(){
    char a[] = "hello";     // 注意：没有写长度
    char b[20] = "hello";   // 注意：写了长度 20

    printf("%d\n", my_strlen(a));   // 应该是 5
    printf("%d\n", strlen(a));      // 也是 5
    printf("%zu\n", sizeof(a));     // 你自己算出来是多少
    printf("%zu\n", sizeof(b)); 
    return 0;    // 再算一次
}