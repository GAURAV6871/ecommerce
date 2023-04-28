#include<iostream>

using namespace std;


template<typename T>
class node 
{
public:

	T val;
	node<T>* next;

	node(T val) 
    {
		this->val = val;
		this->next = NULL;
	}

};

class forward_list 
{

	node<T>* head;
	int count;

	public : 

		forward_list() 
        {
			head = NULL;
			count = 0;
		}

		void push_front(T val) 
        {
			node<T>* n = new node(val);
			n->next = head;
			head = n;
			count++;
		}

		void pop_front() 
        {
			if(!head) 
            {
				return;
			}

			node<T>* tmp = head;
			head = head->next;
			delete tmp;
			count--;
		}

		int size() 
        {
			return count;
		}

		bool empty() 
        {
			return head == NULL;
		}

		int front() 
        {
			return head->val;
		}

		void traverse() 
        {
			node<T>* tmp = head;
			while(tmp) 
            {
				cout << tmp->val << " ";
				tmp = tmp->next;
			}
			cout << endl;
		}
};


int main()
{
    forward_list<string> fw;    
    fw.push_front(50);
    fw.push_front(40);
    fw.push_front(30);
    fw.push_front(20);
    fw.push_front(10);


    cout<<"is empty? "<<fw.empty()<<endl;
    cout<<"size: "<<fw.size()<<endl;

    fw.traverse();//<<endl;
    //cout<<"is empty? "<<fw.empty()<<endl;
    fw.pop_front();
    cout<<"is empty? "<<fw.empty()<<endl;
    cout<<"size: "<<fw.size()<<endl;
    fw.traverse();//<<endl;

return 0;
}