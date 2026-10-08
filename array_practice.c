#include<stdio.h>
#define N 10
int main(){
    int nums[N] = {0};
    double sum = 0;
    double average;
    int max,min;
    int bigger_num=0;
    for(int i = 0; i < N; i++){
    scanf("%d", &nums[i]);
    sum += nums[i];
    }
    average = sum /(double)N;
    max = nums[0];
    min = nums[0];
    for(int j = 1;j<N;j++){
        if(nums[j]>max){
            max = nums[j];
        }
        if(nums[j]<min){
            min = nums[j];
        }
    }
    for(int i = 0; i <N;i++){
        
        if(nums[i]>average){
            bigger_num++;
        }
    }
    printf("最大值：%d 最小值：%d 平均值：%.2lf 比平均值大的数目%d",max,min,average,bigger_num);
    return 0;
}