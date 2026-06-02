#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T arr[5];
    int top;

public:
    Stack()
    { top = -1; }

    void push(T value)
    {  arr[++top] = value; }

    T pop()
    { return arr[top--];   }
};

int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);

    cout << "Integer Stack:" << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    Stack<char> s2;
    s2.push('A');
    s2.push('B');

    cout << "\nCharacter Stack:" << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    return 0;
}


