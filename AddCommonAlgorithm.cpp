#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"�������ĸ���"<<endl;
    cin>>n;
    int *array=new int[n];
    cout<<"����������"<<endl;
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
