#include <bits/stdc++.h>
using namespace std;

#define MAX 10

struct Stack
{
    int a[MAX];
    int top = 0;

    bool push(int data){
        if (top >= MAX){
            return false;
        }
        a[top++] = data;
        return true;
    }

    int pop(){
        if (top <= 0){
            return 0;
        }
        return a[--top];
    }

    int peek(){
        if (top <= 0){
            return 0;
        }

        return a[top];
    }

    bool isEmpty(){
        if (top <= -1)
            return true;
        return false;
    }

};

int main(){
    Stack st = Stack();

    for (int i = 10; i < 22; i++){
        if (st.push(i))
            cout << "Push to Stack : " << i << endl;
        else    
            cout << "Stack overflow " << endl;
    }

    for (int i = 10; i < 22; i++){
        int popped = st.pop();
        if (popped)
            cout << "Popped from Stack : " << popped << endl;
        else    
            cout << "Stack undeflowflow " << endl;
    }

    return 0;
}