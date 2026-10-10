# C 语言练习仓库

机器人工程本科在读，为机器视觉 / 视觉开发方向打编程基础。
本仓库记录大二上的 C 语言学习过程，每个文件对应一个知识点或一次练习。

## 文件说明

| 文件 | 内容 |
| --- | --- |
| `array_practice.c` | 数组基础：读入 10 个整数，求最大/最小/平均值，并统计大于平均值的个数 |
| `my_strlen.c` | 手写 `strlen`：遍历字符串，遇到 `'\0'` 停止计数 |
| `my_strcpy.c` | 手写 `strcpy`：逐字符拷贝并在末尾补 `'\0'`（含哨兵值边界验证） |
| `my_strcmp.c` | 手写 `strcmp`：逐字符比较，返回差值（正数 / 0 / 负数） |
| `input_compare.c` | 字符串输入实验：对比 `scanf("%s")`、`scanf("%9s")`、`fgets` 三种读法，观察空白截断、宽度限制和换行符残留 |
| `my_strcat.c` | 手写 `strcat`：两阶段实现（先定位目标串末尾，再追加源串），并补 `'\0'` |

## 编译与运行

所有代码在 WSL (Ubuntu) 下用 gcc 编译，编译时开启全部警告：

```bash
# 语法：gcc -Wall -Wextra -g -o <可执行文件名> <源文件>
gcc -Wall -Wextra -g -o my_strcmp my_strcmp.c
./my_strcmp
```

排查内存问题时加 AddressSanitizer：

```bash
gcc -Wall -Wextra -g -fsanitize=address -o my_strcat my_strcat.c
./my_strcat
```

> 注意：Linux 下运行当前目录的程序必须写 `./`，否则 shell 会去 PATH 里查找。

## 学习进度

- [x] 数组基础（最大值 / 最小值 / 平均值 / 计数）
- [x] 手写 `strlen`
- [x] 手写 `strcpy` + 边界验证（用 `'#'` 填满目标缓冲区，验证 `'\0'` 落在正确位置）
- [x] 手写 `strcmp`
- [x] 字符串输入：`scanf` vs `fgets` 的行为差异
- [x] 手写 `strcat`（两阶段实现 + 空串边界测试）
- [ ] 二维数组
- [ ] 函数的进阶用法（多文件、头文件、作用域）
- [ ] 结构体
- [ ] 文件读写
- [ ] 指针（第 3~6 周）
- [ ] 动态内存

## 约定

- 编译一律带 `-Wall -Wextra`，**零警告才算通过**
- 每个知识点都留下代码，不只写笔记
- commit message 格式：`type: 做了什么`（type 取 feat / fix / docs / chore）