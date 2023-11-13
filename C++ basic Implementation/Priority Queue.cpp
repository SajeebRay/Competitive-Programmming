#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(55);
    pq.push(155);
    pq.push(255);
    pq.push(5);
    pq.push(50);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
