#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;                //the number of digits.
    int start,end;         //��ʾNλ���� initial value and stop value
    int m;                //���ֽ��λ�������������жϵ���
    int digit;            //ĳ����λ��ֵ
    int sum;               //��λ����N�η��ĺ�
    int i;                 //ѭ������
    cout<<"��nλ������������������λ����";
    cin>>n;
    while(n>0)             //����0ʱ����
    {
     start=pow(10,n-1);
     end=pow(10,n)-1;
     cout<<n<<"λ��������";
     for(i=start;i<=end;i++)       //����ʵֵ����ֵֹ�������
      {
          m=i;                               //��i����m
          sum=0;

     while(m!=0)
          {digit=m%10;              //ȡ��λ����
          sum=sum+pow(digit,n);
          m=m/10;                    //ʮλ���¸�λ
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
