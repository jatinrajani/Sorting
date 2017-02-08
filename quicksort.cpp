#include<iostream>
using namespace std;
int Partioning(int *a,int start,int end){
    int pivot=a[end];
    int pindex=start;
    for(int i=start;i<end;i++)
    if(a[i]<=pivot){
       int temp=a[pindex];
       a[pindex]=a[i];
       a[i]=temp;
       pindex=pindex+1;
    }
   int temp1;
   temp1=a[pindex];
   a[pindex]=a[end];
   a[end]=temp1;
   return pindex;
}


void QuickSort(int *a,int start,int end){
if(start<end){
int pindex;
pindex=Partioning(a,start,end);
QuickSort(a,start,pindex-1);
QuickSort(a,pindex+1,end);
}


}

void printlist(int *a,int size){

for(int i=0;i<size;i++){
cout<<a[i]<<" ";
}

}


int main(){
int a[]={7,2,3,4,5};
QuickSort(a,0,4);
printlist(a,5);



}
