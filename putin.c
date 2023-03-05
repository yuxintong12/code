#include<stdio.h>
int main()
{
    int n = 0;
    //创建十个数据的数组
    int arr[15] = {1,2,3,4,6,7,8,9,10,11};
    //插入前数组输出显示
    printf("插入前数组状态显示：");
    for(int i = 0;i < 10; i++)
    {
        printf("%d",arr[i]);
    }
    scanf("%d",&n);
    int ret = 0;
    for(int i = 0;i < 10;i++)
    {
        //确定区间进行插入
        if(n <= arr[i] )
        {
            ret = i;
        }
    }
    //放要后移的值
    int tem = 0;
    //用n存放后边要进行覆盖的值,tem记录被覆盖的值
    for(int i = ret;i < 11;i++)
    {
    
        tem = arr[i];
        arr[i] = n;
        n = tem;
    }
    return 0;
    
}