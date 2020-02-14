// ex2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include "func.h"

using namespace std;

// 按引用传递参数
void SwapByFre(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

// 按地址传递参数
void SwapByAdd(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/*
按值传递参数，该函数只会交换局部变量a和b的值，
不会影响主调函数的实参
*/
void SwapByVal(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

void dgp_sav_ss_his_data(int* ss_data1, int* ss_data2, int* ss_data3, int* ss_data4, int* ss_data5, int val)
{
    *ss_data1 = *ss_data2;
    *ss_data2 = *ss_data3;
    *ss_data3 = *ss_data4;
    *ss_data4 = *ss_data5;
    *ss_data5 = val;
}

void dgp_sav_ss_his_data2(int& ss_data1, int& ss_data2, int& ss_data3, int& ss_data4, int& ss_data5, int val)
{
    ss_data1 = ss_data2;
    ss_data2 = ss_data3;
    ss_data3 = ss_data4;
    ss_data4 = ss_data5;
    ss_data5 = val;
}


int main()
{
    //fibon_elem(-3);
    std::cout << "Hello World!\n";

    int ceshi1 = 8;
    int ceshi2 = 9;
//    int ceshi1_add;
//    ceshi1_add = &ceshi1;
//    int ceshi2_add;
//    ceshi2_add = &ceshi2;
    int* p;
    p = &ceshi1;

    std::cout << "ceshi1_pointer = ";
    std::cout << p;
    std::cout << "\n";

    std::cout << "ceshi1 = ";
    std::cout << ceshi1;
    std::cout << "\n";
    std::cout << "ceshi1_add = ";
    std::cout << &ceshi1;
    std::cout << "\n";

    std::cout << "ceshi2 = ";
    std::cout << ceshi2;
    std::cout << "\n";
    std::cout << "ceshi2_add = ";
    std::cout << &ceshi2;
    std::cout << "\n";

    huanwei(ceshi1, ceshi2);
    std::cout << "ceshi1 = ";
    std::cout << ceshi1;
    std::cout << "ceshi2 = ";
    std::cout << ceshi2;
    std::cout << "\n";

    int a = 2, b = 5;
    printf("Before : a = %d, b = %d\n", a, b);
    SwapByFre(a, b);
    printf("After SwapByFre(int &a, int &b) : a = %d, b = %d\n", a, b);

    a = 2;
    b = 5;
    SwapByAdd(&a, &b);
    printf("After SwapByAdd(int *a, int *b) : a = %d, b = %d\n", a, b);

    a = 2;
    b = 5;
    SwapByVal(a, b);
    printf("After SwapByVal(int a, int b) : a = %d, b = %d\n", a, b);

    int ss_data_29_t[5] = { 0 };
    int val = 1;
    dgp_sav_ss_his_data(&ss_data_29_t[4], &ss_data_29_t[3], &ss_data_29_t[2], &ss_data_29_t[1], &ss_data_29_t[0], val);
    val++;
    printf("ss_data_29_t[] = %d, %d, %d, %d, %d\n", ss_data_29_t[0], ss_data_29_t[1], ss_data_29_t[2], ss_data_29_t[3], ss_data_29_t[4]);
    dgp_sav_ss_his_data(&ss_data_29_t[4], &ss_data_29_t[3], &ss_data_29_t[2], &ss_data_29_t[1], &ss_data_29_t[0], val);
    val++;
    printf("ss_data_29_t[] = %d, %d, %d, %d, %d\n", ss_data_29_t[0], ss_data_29_t[1], ss_data_29_t[2], ss_data_29_t[3], ss_data_29_t[4]);
    dgp_sav_ss_his_data(&ss_data_29_t[4], &ss_data_29_t[3], &ss_data_29_t[2], &ss_data_29_t[1], &ss_data_29_t[0], val);
    val++;
    printf("ss_data_29_t[] = %d, %d, %d, %d, %d\n", ss_data_29_t[0], ss_data_29_t[1], ss_data_29_t[2], ss_data_29_t[3], ss_data_29_t[4]);
    dgp_sav_ss_his_data(&ss_data_29_t[4], &ss_data_29_t[3], &ss_data_29_t[2], &ss_data_29_t[1], &ss_data_29_t[0], val);
    val++;
    printf("ss_data_29_t[] = %d, %d, %d, %d, %d\n", ss_data_29_t[0], ss_data_29_t[1], ss_data_29_t[2], ss_data_29_t[3], ss_data_29_t[4]);
    dgp_sav_ss_his_data(&ss_data_29_t[4], &ss_data_29_t[3], &ss_data_29_t[2], &ss_data_29_t[1], &ss_data_29_t[0], val);
    val++;
    printf("ss_data_29_t[] = %d, %d, %d, %d, %d\n", ss_data_29_t[0], ss_data_29_t[1], ss_data_29_t[2], ss_data_29_t[3], ss_data_29_t[4]);

    int ss_data_1 = 0;
    int ss_data_2 = 0;
    int ss_data_3 = 0;
    int ss_data_4 = 0;
    int ss_data_5 = 0;
    dgp_sav_ss_his_data(&ss_data_5, &ss_data_4, &ss_data_3, &ss_data_2, &ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data(&ss_data_5, &ss_data_4, &ss_data_3, &ss_data_2, &ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data(&ss_data_5, &ss_data_4, &ss_data_3, &ss_data_2, &ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data(&ss_data_5, &ss_data_4, &ss_data_3, &ss_data_2, &ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data(&ss_data_5, &ss_data_4, &ss_data_3, &ss_data_2, &ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);


    dgp_sav_ss_his_data2(ss_data_5, ss_data_4, ss_data_3, ss_data_2, ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data2(ss_data_5, ss_data_4, ss_data_3, ss_data_2, ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data2(ss_data_5, ss_data_4, ss_data_3, ss_data_2, ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data2(ss_data_5, ss_data_4, ss_data_3, ss_data_2, ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);
    dgp_sav_ss_his_data2(ss_data_5, ss_data_4, ss_data_3, ss_data_2, ss_data_1, val);
    val++;
    printf("ss_data_1-5 = %d, %d, %d, %d, %d\n", ss_data_1, ss_data_2, ss_data_3, ss_data_4, ss_data_5);

    return 0;
}

