#include<iostream>
using namespace std;
const int N = 1000010;
const int M = 1000010;
char  s[N],p[M];
int ne[N];
int n,m;
int main()
{
    cin >> n >> s + 1 >> m >> p + 1;
    //初始化ne数组
    //遍历长文本字符串并求前后缀
    for(int i = 1,j = 0;i <= N;i++)
    {
        //满足不是开头
        while(j && p[j + 1] != p[i]) j = ne[j];
        if(p[j + 1] == p[i])
        {
            j++;
        }
        ne[i] = j;
    }
    for(int j : ne)
    {
        cout << j <<' ';
    }
    return 0;
}