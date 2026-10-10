#include<stdio.h>
#include<string.h>
int main(){
    char buf[20];
    int i = 0;
    fgets(buf,sizeof(buf),stdin);
    buf[strcspn(buf,"\n")] = '\0';
    printf("%s 长度是%zu\n",buf,strlen(buf));
    while(buf[i] != '\0'){
        printf("%d ",buf[i]);
        i++;
    }
    return 0;
}