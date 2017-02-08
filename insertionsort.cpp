#include<iostream>
using namespace std;
void InsertionSort(int a[],int size){
int hole;
for(int i=1;i<size;i++){
hole=i;
int value;
value=a[i];
while(hole>0 && a[hole-1]>value){
a[hole]=a[hole-1];
hole=hole-1;
}
a[hole]=value;
}
}
void PrintList(int a[],int size){
for(int i=0;i<size;i++){

cout<<a[i]<<"\n";
}


}
int main(){
int a[]={5,4,1};
int size=sizeof(a)/sizeof(int);
InsertionSort(a,size);
PrintList(a,size);




}
