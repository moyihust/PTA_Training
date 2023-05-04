#include<iostream>
#include<string>
using namespace std;
//将秒转换成时间

string sec2time(int sec)
{
    string time;
    int hour=sec/3600;
    int min=(sec-hour*3600)/60;
    int second=sec-hour*3600-min*60;
    if(hour<10)
    time+='0';
    time+=to_string(hour);
    time+=':';
    if(min<10)
    time+='0';
    time+=to_string(min);
    time+=':';
    if(second<10)
    time+='0';
    time+=to_string(second);
    return time;
}

int main()
{
    int start,end;
    cin>>start>>end;
    if(end<start)return 0;
    if((end-start)%100>=50)
    {
        end+=100;
    }
    string ans=sec2time((end-start)/100);
    cout<<ans;
}