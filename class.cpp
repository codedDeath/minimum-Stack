stack<int> data;
stack<int> minimum;
MinStack::MinStack() {
 while(!data.empty())
   data.pop();
   while(!minimum.empty())
    minimum.pop();
}
void MinStack::push(int x) {
    data.push(x);
    if(minimum.empty())
        minimum.push(x);
    else if(minimum.top()>x)
        minimum.push(x);
}

void MinStack::pop() {
    if(!data.empty())
    {
        if(data.top()==minimum.top())
        {
            data.pop();
            minimum.pop();
        }
        else
        {
            data.pop();
        }
    }
}

int MinStack::top() {
    if(!data.empty())
    return data.top();
    else
    return -1;
}

int MinStack::getMin() {
    if(!minimum.empty())
    return minimum.top();
    else
    return -1;
}

