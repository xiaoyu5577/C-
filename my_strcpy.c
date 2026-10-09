#include<stdio.h>
#include<string.h>
void my_strcpy(char *dest,const char *src){
    int i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
int my_strlen(const char *s){
    int count = 0;
    while (s[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    char src[] = "hello";
    char dest[20];
    for(int i = 0; i<20;i++){
        dest[i] = '#';
    }
    my_strcpy(dest,src);
    printf("dest = %s\n",dest);
    printf("长度 = %d\n",my_strlen(dest));
    printf("%d %d",dest[5],dest[6]);
    return 0;
}