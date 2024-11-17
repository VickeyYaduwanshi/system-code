#include <iostream>
#define size 5
using namespace std;

void enqueue();
void dequeue();
void diplay();

int queue[size];
int front = -1;
int rear = -1;

void enqueue()
{
    int no;
    if (rear >= size - 1)
    {
        cout << "queue is full";
    }
    else
    {
        cout << "enter no. ";
        cin >> no;

        if (rear == -1)
        {
            rear = front = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = no;
    }
}
void dequeue(){

if(front==-1 || front>rear){
cout<<"queue is empty";
}
else{
    cout<<"deleting element is : "<<queue[front];
    front++;
}

}
void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    do
    {
        cout << "\nenter 1 for enqueue";
        cout << "\nenter 2 for dequeue";
        cout << "\nenter 3 for display";
        cout << "\nenter 4 for exit";
        cout << "\nenter choise : ";
        cin >> x;

        switch (x)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "exit mar diya gya hai";
            break;
        }
    } while (x != 4);
    return 0;
}
