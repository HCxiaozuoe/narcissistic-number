#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;                //the number of digits.
    int start,end;         //表示N位数的 initial value and stop value
    int m;                //待分解各位的数，及、即判断的数
    int digit;            //某个数位的值
    int sum;               //各位数的N次方的和
    int i;                 //循环变量
    cout<<"求n位数的自幂数，请输入位数：";
    cin>>n;
    while(n>0)             //大于0时计算
    {
     start=pow(10,n-1);
     end=pow(10,n)-1;
     cout<<n<<"位自幂数：";
     for(i=start;i<=end;i++)       //从其实值得终止值逐个检验
      {
          m=i;                               //将i赋给m
          sum=0;

     while(m!=0)
          {digit=m%10;              //取低位数字
          sum=sum+pow(digit,n);
          m=m/10;                    //十位成新个位
          }
          if(sum==i)
          {
             cout<<i<<" ";
          }
      }
      break;
    }
    return 0;
}
