#include<stdio.h>
int main()
{
    int  score[10] = {90,86,62,63,87,69,90,100,100,100};//创建十个人成绩的数组
    int sum = 0;
    for(int i = 0;i < 10;i++)//遍历求和
    {
        sum += score[i];

    }
    //这里直接计算输出因为是相除所以要用浮点输出，否则会失去精度
    printf("%.2lf",sum / 10.0);//%.2lf是输出两位小数位的意思并不是四舍五入。
    return 0;

}