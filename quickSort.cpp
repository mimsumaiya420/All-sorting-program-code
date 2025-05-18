

 #include<iostream>
 using namespace std;


 int partitionn(int ar[],int l,int h){

    int pivot=ar[l];
    int i = l ,j = h;

    while(i<j){
        while(ar[i]<=pivot){
            i++;
        }
        while(ar[j]>pivot){
            j--;
        }
        if(i<j){
            swap(ar[i],ar[j]);
        }
    }

    swap(ar[l],ar[j]);
    return j;


}

 void quickSort(int ar[],int l,int h){

    if(l<h){
        int j= partitionn(ar,l,h);

        quickSort(ar,l,j-1);
        quickSort( ar,j+1,h);

}    }




 void display(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;


}

 int main(){

    int n;
    cout<<"enter the number of element: "<<endl;
    cin>>n;

    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cout<<"the array element"<<endl;

    display(ar,n);

    cout<<"after sorting: "<<endl;
    quickSort(ar,0,n-1);
    display(ar,n);


}
