#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int flag;

    for(int i=0;i<n-1;i++){
            flag=0;
        for(int j=0;j<n-1-i;j++){

            if(arr[j]>arr[j+1]){

                int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                    flag=1;

            }
        }

    if(flag==0)
        break;

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

    display(arr,n);
    cout<<endl;

    cout<<"after sorting the element: ";
    bubbleSort(arr,n);
    display(arr,n);



}
