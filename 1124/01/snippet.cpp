#include<iostream>
using namespace std;
struct queue {
    int q[100001];
    int head;
    int rear;
    queue() {
        head = 0;
        rear = 0;
    }
};
void push(queue& que, int num) { // 模拟入队的函数
    que.q[que.rear] = num;
    que.rear++;
}
int front(queue& que) { // 模拟查看队头元素的函数
    return que.q[que.head];
}
int pop(queue& que) { // 模拟出队的函数
    int tNum = front(que);
    que.head++;
    return tNum;
}
bool isEmpty(queue& que) { // 判断队列是否为空的函数
    return que.head == que.rear;
}
int main() {
    int n;
    cin >> n;
    queue que;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "push") {
            int num;
            cin >> num;
            push(que, num);
        } else if (isEmpty(
                       que)) { // 在队列进行pop和front操作前需要先判断队列此时是否为空
            cout << "error" << endl;
        } else if (op == "pop") {
            cout << pop(que) << endl;
        } else if (op == "front") {
            cout << front(que) << endl;
        }
    }
    return 0;
}