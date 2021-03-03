/*
 * C++ Program to Implement Selection Sort
 */
#include <iostream>
#include<conio.h>
#define MAX 10
using namespace std;
class selsort{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};
void selsort :: getdata(){
    cout<<"How many elements you require : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element in Cell :"<<i<<"\t";
        cin>>arr[i];
    }
}
void selsort :: showdata(){
    for(int i=0;i<n;i++)
       {
                cout<<arr[i]<<"   ";
       }
}
void selsort :: sortLogic(){
    int temp,min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min=j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main(){
//clrscr();
       cout<<"\n*****Selection Sort*****\n";
    selsort obj;
    obj.getdata();
    cout<<"\n--UnSorted Elements--\n";
    obj.showdata();
    obj.sortLogic();
    cout<<"\n--Sorted Elements--\n";
    obj.showdata();
return 0;
}
