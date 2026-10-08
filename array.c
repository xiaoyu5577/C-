#include <stdio.h>

int main() {
    // 1. 定义一个数组，存5个分数
    int scores[5] = {90, 85, 78, 92, 88};

    // 2. 遍历打印每个元素
    printf("===== 数组练习 =====\n");
    for (int i = 0; i < 5; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    // 3. 求总和
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    printf("总分 = %d\n", sum);
    printf("平均分 = %d\n", sum / 5);

    // 4. 找最大值
    int max = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    printf("最高分 = %d\n", max);

    return 0;
}
