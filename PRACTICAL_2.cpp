#include <iostream>
using namespace std;

const int size=10;

int hashTable[size];

void initialize(){
    for(int i=0;i<size;i++)
    {
        hashTable[i]=-1;
    }
}

int hashFunction(int key){
    return key%size;
}

void insert(int key){
    int index=hashFunction(key);
    int startIndex=index;
    while(hashTable[index]!=-1)
    {
        index=(index+1)%size;
        if(index==startIndex){
            cout<<"Hash Table is full"<<endl;
            return;
        }
    }
    hashTable[index]=key;

    cout<<"Inserted "<<key<<" at index "<<index<<endl;
}

void search(int key){
    int index = hashFunction(key);
    int startIndex = index;
    while(hashTable[index] != -1)
    {
        if(hashTable[index] == key)
        {
            cout<<"Found "<<key<<" at index "<<index<<endl;
            return;
        }
        index = (index + 1) % size;
        if(index == startIndex){
            break;
        }
    }
    cout<<"Key "<<key<<" not found"<<endl;
}

void display(){
    cout<<"\nIndex\tValue\n";
    for(int i=0;i<size;i++){
        cout<<i<<"\t";

        if(hashTable[i]==-1){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<hashTable[i]<<endl;
        }
        cout<<endl;
    }
}

int main(){
    initialize();
    int choice, key;

    do{
        cout<<"1. Insert\n2. Search\n3. Display\n4. Exit\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter key to insert: ";
                cin>>key;
                insert(key);
                break;
            case 2:
                cout<<"Enter key to search: ";
                cin>>key;
                search(key);
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=4);
    return 0;
}