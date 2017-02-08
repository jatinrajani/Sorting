#include<iostream>
using namespace std;
void SelectionSort(int a[],int size){
for(int i=0;i<size-1;i++){
int imin;
imin=i;
for(int j=i+1;j<size;j++){
if(a[j]<a[imin]){
imin=j;
}
}
int temp=a[i];
a[i]=a[imin];
a[imin]=temp;

}
}


int main()
{
int a[]={2,4,1,3};
SelectionSort(a,4);
for(int j=0;j<4;j++){
cout<<a[j]<<" ";
}




}
