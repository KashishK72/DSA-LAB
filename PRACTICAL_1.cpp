#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array:"<<endl;
    int size;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int choice;
    cout<<"Enter an one of the choices below:"<<endl;
    cout<<"1.Insert an element"<<endl;
    cout<<"2.Delete an element"<<endl;
    cout<<"3.Update an element"<<endl;
    cout<<"4.Display the array"<<endl;
    cout<<"5.Exit"<<endl;
    cin>>choice;

    int element;
    int position;

    switch(choice){
        case 1:
            cout<<"Enter the position where you want to insert the element:"<<endl;
            cin>>position;
            if(position<0 || position>size+1){
                cout<<"Invalid position"<<endl;
            }
            else{
                cout<<"Enter the element to be inserted:"<<endl;
                cin>>element;
                for(int i=size;i>=position;i--){
                    arr[i]=arr[i-1];
                }
                arr[position-1]=element;
                size++;

                for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
            }
            break;



        case 2:
            cout<<"Enter the position where you want to delete the element:"<<endl;
            cin>>position;
            if(position<0 || position>size+1){
                cout<<"Invalid position"<<endl;
            }
            else{
                cout<<"Enter the element to be deleted:"<<endl;
                for(int i=position;i<size;i++){
                    arr[i-1]=arr[i];
                }
                size--;

                for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
            }
            break;


        case 3:
            cout<<"Enter the position where you want to update the element:"<<endl;
            cin>>position;
            if(position<0 || position>size+1){
                cout<<"Invalid position"<<endl;
            }
            else{
                cout<<"Enter the element to be updated:"<<endl;
                cin>>element;
                arr[position-1]=element;

                for(int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
            }
            break;


        case 4:
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            break;


        case 5:
            exit(0);
            break;


        default:
            cout<<"Invalid choice"<<endl;
            break;
            
    }
    return 0;
}