//
//  main.cpp
//  a
//
//  Created by 20141105054 on 15/11/25.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int num;
    string name;
    char sex;
public:
    Student(int n,string nam,char s)
    {
        num=n;
        name=nam;
        sex=s;
    }
    void display()
    {
        cout<<num<<endl;
        cout<<name<<endl;
        cout<<sex<<endl;
    }
    void set_up()
    {
        cin>>num;
        cin>>name;
        cin>>sex;
    }
};
class Graduate:public Student
{
private:
    int pay;
public:
    void display()
    {
        Student::display();
        cout<<pay<<endl;
    
    }
    Graduate(int n,string nam,char s,int p):Student(n,nam,s)
    {
        pay=p;
    }
};
class Teacher:public Graduate
{
private:
    string address;
public:
    Teacher(int n,string nam,char s,int p,string add):Graduate(n,nam,s,p)
    {
        address=add;
    }
    void display()
    {
        cout<<address<<endl;;
    }
    
};
int main()
{
    Graduate s1(661,"szy",'m',1500);
    //s1.set_up();
    s1.display();
    Teacher t(20141105054,"songzhiyuan",'m',2000,"neimenggu");
    t.display();
    return 0;
    
    
    
    
}