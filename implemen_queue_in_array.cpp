#include <bits/stdc++.h> 
class Queue {
    int* arr;
    int shuru;
    int rear;
    int size;
public:
    Queue() {
        size=100001;
        arr=new int[size]; 
        shuru=0;
        rear=0;
        
    }

    
    bool isEmpty() {
        if(shuru==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear==size){
           return;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(shuru==rear){
            return -1;
        }
        else{
            int ans=arr[shuru];
            arr[shuru]=-1;
            shuru++;
            if(shuru==rear){
                shuru=0;
                 rear=0;
            }
            return ans;
        }
        
    }

    int front() {
        if(shuru==rear){
            return -1;
        } 
        else {
          return arr[shuru];
        }
    }

};
