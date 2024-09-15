#include<iostream>
#include"queue.h"

Queue getNode(int data, int priority){
    Queue node = new (struct Node);
    node->next = NULL;
    node->data = data;
    node->priority = priority;
    return node;
}

Queue init(){
    return (getNode(0,0));
}

bool queue_empty(Queue q){
    if(q->next == NULL){
        return true;
    }
    return false;
}
// 10,4->20,3->40,2->30,1->10
void enqueue(Queue q, int data, int pri){
    Queue node = getNode(data,pri);
    Queue current = q->next;
    Queue prev;
    if(queue_empty(q) || node->priority > current->priority){
        node->next = current;
        q->next = node;
    }else{
        while(current != NULL && node->priority <= current->priority){
            prev = current;
            current = current->next;
        }
        prev->next = node;
        node->next = current;
    }
}

int dequeue(Queue q){
    int val; 
    Queue curr;
    if(queue_empty(q)){
        return 0;
    }
    curr = q->next;
    val = curr->data;
    q->next = curr->next;
    delete curr;

    return val;
}

void display(Queue q){
    Queue curr = q->next;
    while(curr != NULL){
        std::cout << curr->data << "->";
        curr = curr->next;
    }
}
