#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;
int nowyear = 2014, nowmonth = 9, nowday = 6;
class human
{
public:
    human(std::string name, int agey,int agem,int ageday)
    {
        this->name = name;
        this->agey=agey;
        this->agem=agem;
        this->ageday=ageday;
        this->age=(nowyear-agey)*365+(nowmonth-agem)*30+(nowday-ageday);
    }
    std::string name;
    int age;
    int agey,agem,ageday;
    human()
    {
        this->name="";
        this->age=0;
    }
};
void humanSort(vector<human> &all,int num)
{
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i-1;j++)
        {
            if(all[j].age>all[j+1].age)
            {
                human temp=all[j];
                all[j]=all[j+1];
                all[j+1]=temp;
            }
        }
    }
}
int main()
{
    int num,y,m,d;
    vector<human> all;
    string name;
    cin>>num;
    human temp,max,min;
    min.age=200*365;
    max.age=-1;
    for(int i=0;i<num;i++)
    {
        cin>>name;
        scanf("%d/%d/%d",&y,&m,&d);
        temp=human(name,y,m,d);
        if(temp.age>=0&&temp.age<=200*365)
        {
            all.push_back(temp);
            if(temp.age>max.age)
                max=temp;
            if(temp.age<min.age)
                min=temp;
        }
    }
    cout<<all.size()<<" "<<max.name<<" "<<min.name;
}