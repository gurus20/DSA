#include <iostream>
using namespace std;

#define MAX 10

struct queue{
    int a[MAX];
    int top = 0;

    void enque(int data){
        // cout << " fhifguweo";
        if (top >= MAX)
        {
            cout << "Queue Overflowed" << endl;
        }

        a[top++] = data;
    }

    int deque(){
        if (top <= 0)
            return 0;

        int data = a[0];
        int i = 1;
        while(i <= top){
            swap(a[i-1], a[i]);
            i++;
        }
        top--;
        return data;
    }

    void printQueue(){
        int t = top;
        while(t--) 
            cout << a[t] << endl;
    }

    int peak(){
        if (top != 0)
            return a[0];
        return 0;
    }

};

int main(){
    queue q = queue();
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);

    q.printQueue();
    cout << "-----------------\n";
    int d = q.deque();
    cout << d << endl; 
    cout << "-----------------\n";
    d = q.deque();
    cout << d << endl; 
    cout << "-----------------\n";
    q.printQueue();
    cout << "-----------------\n";
    cout << q.peak() << endl;
    cout << q.peak() << endl;
    cout << q.peak() << endl;
    return 0;
}

