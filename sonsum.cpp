#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int> & p,int l,int r)
{
    //定义中间最大和变量以及传递变量，就是根节点的变量
    int sum = 0;
    //定义左右和存放的地方，其实基本原理就是在左右枝进行计算和，然后将左右的最大子列和，和在根节点计算的
    //中间子列和进行比较
    int lsum ,rsum;//存放左右答案的地方
    //存放中间序列左右和用于合并
    int s1,s2;
    //如果当左右下标相等的时候则将开始缩小到的这个数是否为0
    //如果为负数的话则将sum置为0
    if(l = r)
    {
        if(p[l] <= 0)
        {
            sum  = 0;
        }
        else
        {

        }
        return sum;
    }
}
int main()
{
    int n = 0;
    //输入一共几个数字
    cin >> n;
    vector<int>arr;
    int tem = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> tem;
        arr.push_back(tem);
    }
    //进行求子列的最大和
    int maxsum = sum(arr,0,n - 1);
    cout << maxsum << endl;
    return 0;

}