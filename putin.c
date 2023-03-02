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
    for(int i = 0;i < 9;i++)
    {
        if(n >= arr[i] && n <= arr[i + 1] )
        {
            ret = i;
        }
    }
    for(int i = ret;i < 11;i++)
    {

    }

    
}