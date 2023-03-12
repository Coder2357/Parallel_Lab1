#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"输入数的个数"<<endl;
    cin>>n;
    int *array=new int[n];
    cout<<"输入所有数"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+array[i];
    }
    cout<<sum<<endl;
    delete[] array;
    return 0;
}
