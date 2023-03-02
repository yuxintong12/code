#include<stdio.h>
#include<stdbool.h>
int r_year[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int p_year[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
bool is_Leap_year(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
int getday(int year,int month)
{
    if(is_Leap_year(year))
    {
        return r_year[month - 1];
    }
    else
    {
        return p_year[month - 1];
    }
}
int main()
{
    int month = 0;
    int year = 0;
    scanf("%d %d",&year,&month);
    printf("%d年%d月一共有%d天",year,month,getday(year,month));
    return 0;

}