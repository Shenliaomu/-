#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string s;//记录输入1000以内的正整数N
    int num[10]={0};//散列桶，0-9
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j='0';j<='9';j++)
        {
            if(s[i]==j)
            {
                int n=j-'0';//将数字字符转为数字 !!!
                num[n]++;//对应散列桶+1
            }
        }
    }
    for(int k=0;k<10;k++)
    {
        if(num[k]!=0)
        {
            cout<<k<<':'<<num[k]<<endl;//输出
        }
    }
    return 0;
}

