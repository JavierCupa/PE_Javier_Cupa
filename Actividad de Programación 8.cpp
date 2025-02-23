#include <iostream>
using namespace std;
void intro();

int main(){
    bool menu=true;
    char op;
    float val;
    int pos=0;
    float ar[10];
    while (menu){
        intro();
        cin>>op;
        switch (op){
            case '1':{
                if (pos<=9){
                    cout<<"Enter value to be entered: ";
                    cin>>val;
                    ar[pos]=val;
                    pos++;
                }
                else {
                    cout<<"Value is out of range"<<endl;
                }
                break;
            }
            case '2':{
                for (int i=0;i<pos;i++){
                    cout<<"[p="<<i+1<<": "<<ar[i]<<"]"<<endl;
                }
                break;
            }
            case '3':{
                int sum=0;
                for (int i=0;i<pos;i++){
                    sum+=ar[i];
                }
                cout<<"Sum of the values is: "<<sum<<endl;
                break;
            }
            case '4':{
                int size;
                for (int i=0;i<pos;i++){
                    cout<<"[p="<<i+1<<": "<<ar[i]<<"]"<<endl;
                }
                cout<<"Select the position you want to change value: ";
                cin>>size;
                cout<<"Enter the new value: ";
                cin>>val;
                ar[size-1]=val;
                cout<<"Value has been edited succesfully"<<endl;
                break;
            }
            case '5':{
                    int size;
                    for (int i=0;i<pos;i++){
                        cout<<"[p="<<i+1<<": "<<ar[i]<<"]"<<endl;
                    }
                    cout<<"Select the position you want to delete: ";
                    cin>>size;
                    if(size>=1&&size<=pos){
                        for (int i=size-1;i<pos-1;i++){
                            ar[i]=ar[i+1];
                        }
                        pos--;
                        cout<<"Value has been deleted successfully"<<endl;
                    } else {
                        cout<<"Invalid position"<<endl;
                    }
                    break;                 
            }
            case '6':{
                cout<<"Deleting all values..."<<endl;
                for (int i=pos;i>=pos;i--){
                    pos=0;
                }
                break;
            }
            case '7':{
                menu=false;
                cout<<"Exiting program, please Wait..."<<endl;
                break;
            }
        }
    }
    return 0;
}
void intro(){
    cout<<"---Bienvenidos---"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Show"<<endl;
    cout<<"3. Sum"<<endl;
    cout<<"4. Edit"<<endl;
    cout<<"5. Delete"<<endl;
    cout<<"6. Dump"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Selecciona una opcion: ";
}