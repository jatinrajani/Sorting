#include<iostream>
using namespace std;
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;

}
void BubbleSort(int *a,int n){
for (int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
swap(&a[j],&a[j+1]);

}




}


}
}
void printlist(int *b,int size){
for(int i=0;i<size;i++){
cout<<b[i]<<endl;
}


}



int main(){
int a[]={1,2,4,3};
BubbleSort(a,4);
printlist(a,4);


}
