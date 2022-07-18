#include <iostream>
using namespace std;
#define MAX 10

struct arrayList {
    int a[MAX];
    int count = 0;

    void append(int data){
        if (count == MAX){
            cout << "Can't Append, List Reached to its Max limit\n";
            return;
        }
        
        a[count++] = data;
    }
    
    bool isEmpty(){
        if (count == 0) 
            return true;
        return false;
    }
    
    void traverse(){
        for (int i = 0; i < count; i++)
            cout << a[i] << " ";
        cout << endl;
   }
   
   void insertAt(int data, int pos){
       if (pos <= count && count < MAX){
            a[count] = data;
            count++;
            int i = count -1;
            while(i > pos) {
                swap(a[i], a[i-1]);
                i--;
            }
       }
       else{
           cout << "Can't Insert, List Reached to its Max limit\n";
       }
   }
      
};

int main() {
    arrayList al;
    al.append(10);
    al.append (20);
    al.append (30);
    al.append (40);
    al.append (40);
    al.append (40);
    al.append (40);
    al.append (40);
    
    al.traverse ();
    
    // cout << al.isEmpty () << endl;
    
    al.insertAt (70, 0);
    al.insertAt (80, 5);
    al.insertAt (60, 7);
    
    al.traverse();
    
    return 0;
}