#pragma once
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define Bit_Array_Num 1000000//位数组大小
#define Hash_Num 7 //哈希函数的数量



//哈希函数
unsigned int MyHash(unsigned char*str,int len,unsigned int * bit_array);
//插入布隆过滤器
void insert(unsigned char*str,int len,unsigned int* bit_array);
//搜索布隆过滤器
int search(unsigned char*str,int len,unsigned int* bit_array);

