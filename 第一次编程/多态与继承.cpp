//
//  多态与继承.cpp
//  第一次编程
//
//  Created by 朱博宇 on 2018/6/21.
//  Copyright © 2018年 朱博宇. All rights reserved.
//
#include<iostream>
using namespace std;
class student{
public:
    
    virtual void func1(){
        cout<<"hello mac book"<<endl;
    }
    void func2(){
        cout<<"haha"<<endl;
    }
};
class education :public student{
    virtual void func1(){
        cout<<"hello world"<<endl;
    }
};
int main(){
    education b;
    student * p = & b;
    p->func1();
    p->func2();
}
