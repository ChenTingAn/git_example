template < class T >
bool Queue < T >::IsFull() { 
    if((front%capacity)==(rear%capacity)){
        check what if queue[rear+1]is empty or not
        if(not empty) return 1;
        else return 0;
    }
    else return 0;
}

template < class T >
bool Queue < T >::IsEmpty() { 
    if((front%capacity)==(rear%capacity)){
        check what if queue[rear+1]is empty or not
        if(empty) return 1;
        else return 0;
    }
    else return 0;
}

void Queue::enQueue(int value){ 
	if ((front == 0 && rear == size-1)||(rear == (front-1)%(size-1))){ 
        printf("\nQueue is Full"); 
    } 
  	else if (front == -1) /* Insert First Element */{ 
        front = rear = 0; 
        arr[rear] = value; 
    } 
 	else if (rear == size-1 && front != 0){ 
        rear = 0; 
        arr[rear] = value; 
    } 
  	else{ 
        rear++; 
        arr[rear] = value; 
    } 
} 
// Function to delete element from Circular Queue 
int Queue::deQueue(){ 
    if (front == -1){ 
        printf("\nQueue is Empty"); 
    } 
  	int data = arr[front]; 
    arr[front] = -1; 
    if (front == rear){ 
        front = -1; 
        rear = -1; 
    } 
    else if(front == size-1)   front = 0; 
    else    front++; 
    return data; 
} 
