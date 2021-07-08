#ifndef STACK_
#define STACK_
#include <iostream>
#include <stack>
using namespace std;


void Data_Stack()
{
    stack<int> t;
    t.push(9);
    t.push(44);
    t.push(3);
    t.push(10);
    t.push(54);
    t.pop();
    t.pop();
}

#endif