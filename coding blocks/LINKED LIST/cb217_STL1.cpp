/*
	Forward List - STL implementation of singly linked list	
	How to create a forward_list ? 
		> use empty container constructor (default constructor)
		> use fill constructor
		> use range constructor
		> use copy constructor
		> use initialiser list (C++11)
	How to add elements to a forward_list ?
	    > use forward_list::push_front to add element at head (constant time operator)
	How to remove elements from a forward_list ?
	    > use forward_list::pop_front to remove element from the head (constant time operation)
	    > use forward_list::clear to remove all the elements from a forward_list
	How to check size of a forward_list ?
	    > forward_list is the only standard container to deliberately lack a size member function 
	      for efficiency considerations. To obtain the size of a forward_list object, you can use 
	      the distance algorithm with its begin and end, which is an operation that takes linear time.
		> use forward_list::max_size to know maximum number of elements that can added in a forward_list
	How to check if a forward_list is empty ?
	    > use forward_list::empty or check if forward_list size is 0
	How to access element at the front? 
	    > use forward_list::front 
	How to iterate over elements in a forward_list ?
	    > use an iterator
*/



#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main()
{
    forward_list<int> l1;

    //checking the size of the linked list
    cout<<"size of linked list: "<<distance(l1.begin(),l1.end())<<endl;


    //pushing elements at the front of the linked list
    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    cout<<"size of linked list: "<<distance(l1.begin(),l1.end())<<endl;

    cout<<"head element: "<<l1.front()<<endl;

    //now iterate over the linked list to print all the elements
    for(auto it=l1.begin(),end=l1.end(); it!=end;it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //delete element from the front
    l1.pop_front();
    l1.pop_front();
    //l1.pop_front();
    cout<<"size of linked list: "<<distance(l1.begin(),l1.end())<<endl;

    //iterating over the linked list using for each loop
    
    for(int x:l1)
    {
        cout<<x<< " ";
    }
    cout<<endl;

    l1.clear();
    
    cout<<"size of linked list: "<<distance(l1.begin(),l1.end())<<endl;

    cout<<"maximum no of elements that can be present in the linked list: "<<l1.max_size()<<endl;


return 0;
}