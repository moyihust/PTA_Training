#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student
{
    public:
    string name;
    string num;
    int score;
    student(string name,string num,int score)
    {
        this->name=name;
        this->num=num;
        this->score=score;
    }
    student()
    {
        this->name="";
        this->num="";
        this->score=0;
    }
};
int main()
{
    vector<student> stu;
    int n;
    student max;
    student min;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        string num;
        int score;
        cin>>name>>num>>score;
        stu.push_back(student(name,num,score));
        if(i==0)
        {
            max=stu[i];
            min=stu[i];
        }
        else
        {
            if(stu[i].score>max.score)
            {
                max=stu[i];
            }
            if(stu[i].score<min.score)
            {
                min=stu[i];
            }
        }
    }
    printf("%s %s\n",max.name.c_str(),max.num.c_str());
    printf("%s %s",min.name.c_str(),min.num.c_str());
}