void push(stack<int>& s, int a){
	s.push(a);
}
bool isFull(stack<int>& s,int n){
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	return s.size()==0;
}

int pop(stack<int>& s){
	int x=s.top();
	s.pop();
	return x;
}
