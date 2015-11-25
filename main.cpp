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
};
int main()
{
    Student s1(661,"szy",'m');
    s1.display();
    return 0;
    
    
    
    
}