#include<iostream>
using namespace std;


void insertionSort(int arr[],int n){

        for(int i=0;i<n;i++){
            int key=arr[i];
            int j=i-1;

            while(j>=0 && arr[j]>key){


                arr[j+1]=arr[j];
                j=j-1;
            }

            arr[j+1]=key;





        }


}



    void display(int arr[],int n){
        cout<<"the array elements is :"<<endl;


        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
}


int main(){
        int n;
        cout<<"enter the number of element :"<<endl;
        cin>>n;
        int arr[n];
         cout<<"input the array element: "<<endl;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<endl;



    cout<<"after sorting the element: ";
    insertionSort(arr,n);
    display(arr,n);



}
