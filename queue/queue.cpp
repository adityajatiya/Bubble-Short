#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    public :
    Queue
    arr = new int[n];
    front = -1;
    rear = -1;

    void inQueue(int x){
        if(rear==n-1){
            cout<<"Queue Overflow ";
        }
        else {
            rear --;
            front ++;
            arr[front]=x;
        }
    }
};
int main()
{ 

int n;
cout<<"Enter array size ";
cin>>n;
int arr[n];

    Queue q;
    q.inQueue(12);
}
