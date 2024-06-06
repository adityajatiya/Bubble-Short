#include <iostream>
using namespace std;
#define n 100
class Stack
{
private:
    int *arr;
    int top;

public:
    Stack()
    {
         arr = new int[n];
         top = -1;
    }

    void push(int x)
    {
        if (top == n- 1)
        {
            cout << "Stack overflow" << endl;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    cout << S.Top() << endl;
    S.pop();
    cout<<S.Top()<<endl;
    S.pop();
    S.pop();
    S.pop();
    cout<<S.empty();
    

}