#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int front,rear,arr[100];
    public:
    Queue(){
        front=0;
        rear=-1;
    }
    bool isempty(){
        return front>rear;
    }
    bool isfull(){
        return rear==99;
    }
    int dequeue(){
        if(!isempty()) return arr[front++];
        return -1;
    }
    void enqueue(int val){
        if(!isfull()) arr[++rear]=val;
        else cout<<"over flow"<<endl;
    }
    int peek() {
        return(isempty()) ? -1:arr[front];
    }
    void display(){
        if(!isempty()){
            for(int i=front;i<=rear;i++) cout<<arr[i]<<" ";
        }
        else cout<<"stack is empty"<<endl;
    }
};

int main() {
	// your code goes here
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.peek() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Front element after two dequeues: " << q.peek() << endl;
    q.enqueue(40);
    cout << "Front element after enqueue(40): " << q.peek() << endl;
    cout << "elements in queue";
    q.display();
}
