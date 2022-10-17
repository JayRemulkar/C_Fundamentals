#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next; 
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCLL
{
    private:
        PNODE head;
        PNODE tail;
    
    public:
        SinglyCLL()
        {
            head = NULL;
            tail = NULL;
        }
    
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InserAtPos(int iNo,int Pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);
        void Display();
        int Count();
};

void SinglyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    tail->next = head;
}

void SinglyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
        tail = newn;
    }
    else
    {
        PNODE temp = head;

        while(temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = newn;
        tail = newn;
    }
    tail->next = head;
}

void SinglyCLL::InserAtPos(int iNo,int Pos)
{
    int iSize = Count();
    
    if((Pos < 0)||(Pos > (iSize+1)))
    {
        cout<<"invalid Input"<<endl;
        return;
    }
    else if(Pos == 1)
    {
        InsertFirst(iNo);
    }
    else if(Pos == (iSize+1))
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = NULL;

        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;

        PNODE temp = head;
        int iCnt = 0;

        for(iCnt = 1; iCnt < (Pos-1); iCnt++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCLL::DeleteFirst()
{
    if((head == NULL) && (tail == NULL))
    {
        cout<<"Linked List is empty..."<<endl;
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        delete tail->next;

        tail->next = head;
    }    
}

void SinglyCLL::DeleteLast()
{
    if((head == NULL) && (tail == NULL))
    {
        cout<<"Linked list is empty..."<<endl;
        return;
    }
    else if(head == tail)
    {
        delete tail;
        head = NULL;
        tail = NULL;
    }
    else 
    {
        PNODE temp = head;

        while(temp->next->next != head)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = head;
        tail = temp;
    }
}

void SinglyCLL::DeleteAtPos(int Pos)
{
    int iSize = Count();

    if((Pos < 1)||(Pos > iSize))
    {
        cout<<"Invalid Input"<<endl;
        return;
    }
    else if(Pos == 1)
    {
        DeleteFirst();
    }
    else if(Pos == iSize)
    {
        DeleteLast();
    }
    else 
    {
        int iCnt = 0;
        PNODE temp = head;
        PNODE tempdelete = NULL;

        for(iCnt = 1; iCnt < (Pos-1); iCnt++)
        {
            temp = temp->next; 
        }

        tempdelete = temp->next;
        temp->next = temp->next->next;
        delete tempdelete;
    }
}

void SinglyCLL::Display()
{
    if((head == NULL)&&(tail == NULL))
    {
        return;
    }

    PNODE temp =  head;

    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;  
}

int SinglyCLL::Count()
{
    int iCnt = 0;

    if((head == NULL)&&(tail == NULL))
    {
        return 0;
    }

    PNODE temp = head;

    do 
    {
        iCnt++;
        temp = temp->next;
    }while(temp != head);
    
     
    return iCnt;
}

int main()
{
    SinglyCLL obj;
    int iRet = 0;

    obj.InsertFirst(11);
    obj.InsertFirst(21);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.InsertLast(51);
    obj.InsertLast(101);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.DeleteFirst();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.InserAtPos(75,2);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.DeleteAtPos(2);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;
    
    return 0;
}