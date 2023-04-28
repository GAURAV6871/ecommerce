//IMPLEMENTAION OF HashMap/HashTable

#include<iostream>
using namespace std;

class node
{
    public:

    int k;       //stores key
    int v;       //stores value
    node* next;   
    
    node(int k,int v)
    {
        this->k=k;
        this->v=v;
        this->next=NULL;
    }
};

class hashmap
{
    int N;   //to store the hash table capacity
    int M;   //to store the hash table size
    double l;  //to store the load factor threshold

    node **t;  //TO STORE THE POINTER TO THE DYNAMIC          we are making a dynamic array in which each element will be if node type 
               //array that represents the hash table         new node*[n]   for normal array it is new int[5] 


    int hashfun(int k)
    {
        return k%N;
    }


    void transfer(node* head)
    {
        //1. rehash (k,v)pairs present in the linked list represented
        //   by head pointer to the updated hashmap
        node* temp=head;
        while(temp)     //we will iterate over the linked list
        {
            insert(temp->k,temp->v);    // the insert function is working on the node t so it will insert the linked list in the respected t
            temp=temp->next;
        }


        //2. release memory allocated for the linked list represented 
        //   head pointer
        while(head)
        {
            temp=head;
            head=head->next;
            delete temp;
        }
    }

    void rehash()
    {
        //1. save pointer to the current hashmap and its capacity
        node* *oldt=t;
        int oldN=N;

        //2. create a hashmap with double capacity
        N*=2;
        t=new node*[N];
        for(int i=0;i<N;i++)
        {
            t[i]=NULL;
        }    
        M=0;//because the new hashmap is having 0 capacity initially


        //3. transfer (k,v) pairs from old hashmap to the updated hashmap
        for(int i=0;i<oldN;i++)
        {
            transfer(oldt[i]);
        }


        //4. release the memory allocated to the old hashmap
        delete [] oldt; 
    
    }

    public: 
    hashmap(int N=7, double l=0.7 )//l is the load factor 
    {
        this->N=N;
        this->M=0;
        this->l=l;

        //node* *t=new node*[n];
        t= new node*[N];   // t is a variable of type node**
        for(int i=0;i<N;i++)
        {
            t[i]=NULL;
        }
    }    

    void insert(int k, int v)
    {
        // 1. transform the key into hash index using the hash function
        int hashidx=hashfun(k);
        // 2.create a node with the given (k,v) pair and insert it at 
        //   head of the linked list stored at hash index  
        node * n=new node(k,v); 
        n->next=t[hashidx];
        

        // 3. you have to update the pointer to the head of the linked list stored at the 
        //    hash index such that it holds the address of the newly
        //    created node 
        t[hashidx]=n; 
        M++;
         
        //4. rehash if loadfactor exceeds the loadfactor threshold
        double LF=(M*1.0)/N;
        //cout<<LF<<endl;
        if(LF>l)
        {

            //if load factor is greater then threshold we will do rehashing
            //rehash...
            //cout<<"rehashing LF= "<<LF<<" ";
            rehash();
        }

    }
    node * find(int k)
    {
        // 1. transform the key into hash index using the hash function
        int hashidx=hashfun(k);

        // 2.search for the node with the given key in the linked list 
        node* temp=t[hashidx];
        while(temp )
        {
            if(temp->k==k)
            {
                //temp node contains the key that you are looking for
                return temp;
            }
            temp=temp->next;
        }        
        return temp;
    }


    void erase(int k)
    {
        // 1. transform the key into hash index using the hash function
        int hashidx=hashfun(k);

        // 2. delete the node with the given key from the linked list stored at the hash index
        node* temp=t[hashidx];
        if (temp && temp->k==k)
        {
            //delete the head node of the linked list present at the hash index
            t[hashidx]=temp->next;
            delete temp;
        }
        else
        {
            temp=t[hashidx];

            node* prev=NULL;
            while(temp)
            {
                if(temp->k==k)
                {
                    prev->next=temp->next;
                    delete temp;
                    break;
                }
            }
            prev=temp;
            temp=temp->next ;
        }
    }
    void printlinkedlist(node* head)
    {
        while(head)
        {
            cout<<"("<<head->k<<", "<<head->v<<") ";
            head=head->next;
        }
        cout<<endl;
    }

    void printhashmap()
    {
        for(int i=0;i<N;i++)
        {
            cout<<i<<": ";
            printlinkedlist(t[i]);
        }
        cout<<endl;
    }

    operator[](int k)
    {
        node * temp=find(k);
        if(!temp)
        {
            int garbage;
            insert(k,garbage);
            temp=find(k);
        }
        return temp->v;

    }


};


int main()
{
    hashmap HashMap(5);

    HashMap.insert(0,0);
    HashMap.insert(1,1);
    HashMap.insert(2,4);

    HashMap.printhashmap();

    HashMap.insert(3,9);
    HashMap.insert(4,16);
    HashMap.insert(5,25);
    HashMap.insert(6,36);
    HashMap.insert(7,49);
    HashMap.insert(8,64);
    HashMap.insert(9,81);

    HashMap.printhashmap();
    int  k;
    cout<<"enter the value of key you want to lookup for"<<endl;
    cin>>k;

    //LOOKUP FUNCTION   
    node* temp= HashMap.find(k);
    temp? cout<<temp->v<<endl:
          cout<<k<<" not found"<<endl;


    //DELETE FUNCTION
    HashMap.erase(k);
    node* temp1= HashMap.find(k);
    temp1? cout<<temp1->v<<endl:
          cout<<k<<" not found"<<endl;
    //printing the hashmap function after deleting
    HashMap.printhashmap();
    
    HashMap.erase(4);
    temp1= HashMap.find(4);
    temp1? cout<<temp1->v<<endl:
          cout<<4<<" not found"<<endl;
    //printing the hashmap function after deleting
    HashMap.printhashmap();   


    HashMap[12]=144;   //inserts 144 in the hashmap for the key 12
                       //if 12 is not present it will add 12 and than assign 144 to it  
    return 0;
}