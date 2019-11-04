#include <iostream>
#include "QueType.cpp"
using namespace std;

int main()
{
    int array[5]={1,5,3,4,8};

     QueType<int> object;

     if(object.IsEmpty())
     {
         cout<< "Queue is empty "<<endl;
     }
     else
        cout << "Queue is not empty " <<endl;

        for(int i=0; i<4;i++)
        {
            object.Enqueue(array[i]);

        }

     cout<< "Queue contents : " << endl;

     object.Print();


     if(object.IsFull())
     {
         cout<<"Queue is full"<<endl;
     }
     else
     {
         cout<<"Queue is not full"<<endl;

     }


     if(object.IsEmpty()==NULL)
     {
        cout<<"Queue is Empty"<<endl;
     }

     else
     {
        cout<<"Queue is not Empty"<<endl;
     }


     for(int i=0; i<5; i++)
     {
         object.Enqueue(array[i]);
     }

     cout<<"Queue contents : "<<endl;

     object.Print();

     if(object.IsFull())
     {
         cout<<"Queue is full"<<endl;
     }
     else
     {
         cout<<"Queue is not full"<<endl;

     }

     object.Dequeue(array[0]);
     object.Dequeue(array[1]);


     cout<<"Queue contents : "<<endl;
     object.Print();


     object.MakeEmpty();

      if(object.IsEmpty())
     {
            cout<<"Queue is Empty"<<endl;
     }

     else
        cout<<"Queue is not Empty"<<endl;

        cout<<"Queue contents : "<<endl;


        object.Enqueue(5);
        object.Enqueue(6);

        cout<<"Queue contents : "<<endl;

        object.Print();

    return 0;
}
