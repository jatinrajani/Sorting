#include<iostream>
using namespace std;

void Merge(int *m,int *l,int *r,int l1,int r1){
int i=0,j=0;
int k=0;
while(i<l1&&j<r1){
if(l[i]<=r[j]){
   m[k]=l[i];
   i=i+1;
   }
else{
     m[k]=r[j];
     j=j+1;
}
k=k+1;

}
while(i<l1){
m[k]=l[i];
i=i+1;
k=k+1;

}

while(j<r1){
m[k]=r[j];
j=j+1;
k=k+1;
}
}

void MergeSort(int *a,int n)
{
    int mid,i;
    if(n<2) return;

    mid=n/2;
    int *L=new int[mid];
    int *R=new int[n-mid];
for(i=0;i<mid;i++){
    L[i]=a[i];

}
for(i=mid;i<n;i++){
    R[i-mid]=a[i];

}
MergeSort(L,mid);
MergeSort(R,n-mid);
Merge(a,L,R,mid,n-mid);


}

void printList(int *a,int n){
for(int i=0;i<n;i++){

cout<<a[i];

}


}




int main(){
int a[]={7,4,1,2};
int k=sizeof(a)/sizeof(int);
MergeSort(a,k);
printList(a,k);


}
