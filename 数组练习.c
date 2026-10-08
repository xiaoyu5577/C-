#include<stdio.h>
int main(){
    int nums[10] = {0};
    double sum = 0;
    double average;
    int max,min;
    int bigger_num=0;
    for(int i = 0; i < 10; i++){
    scanf("%d", &nums[i]);
    sum += nums[i];
    }
    average = sum /10.0;
    max = nums[0];
    for(int j = 1;j<10;j++){
        if(nums[j]>max){
            max = nums[j];
        }
    }
    min = nums[0];
    for(int j = 1;j<10;j++){
        if(nums[j]<min){
            min = nums[j];
        }
    }
    for(int i = 0; i <10;i++){
        
        if(nums[i]>average){
            bigger_num++;
        }
    }
    printf("%d %d %.2lf %d",max,min,average,bigger_num);
    return 0;


}