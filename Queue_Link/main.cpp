#include "QueType.cpp"
#include <iostream>

using namespace std;

int main(void) {
	QueType<int> object;
    int array[4]={1,5,3,4};
    int num = 8;
    int arr[2]= {5,6};
	object.MakeEmpty();

	if(object.IsEmpty()==true)
    {

        cout<< "Queue is empty" << endl;

    }
    else
        cout<< "Queue is not empty" << endl;

     for(int index=0; index<4;index++)
     {

         object.Enqueue(array[index]);

     }
     cout<<" "<<endl;


    cout<<"Queue : "<<endl;

    object.Print();

    cout<<" "<<endl;

	cout<<"Adding 8 to the Queue : "<<endl;

	object.Enqueue(8);

	object.Print();

	cout<<" "<<endl;

	if(object.IsFull()==NULL)
    {
        cout<< "Queue is full"<<endl;
    }
    else
        cout<< "Queue is not full"<<endl;

    cout<<" "<<endl;
	cout << "Deleting Item from the Queue"<<endl;
	object.Dequeue(array[0]);
	object.Dequeue(array[1]);

    object.Print();

    object.MakeEmpty();


    if(object.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }

    cout<< "Queue contents :  " <<endl;
    object.Print();

    object.Enqueue(arr[0]);
    object.Enqueue(arr[1]);

    cout<< "Queue contents : " <<endl;
    object.Print();
	return 0;
}
