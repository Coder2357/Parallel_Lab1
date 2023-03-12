#include<iostream>
using namespace std;
static int sum=0;
int add(int n,int* a){
    if(n>2){
        if(n%2==0){
            int count=0;
            for(int i=0;i<n;i=i+2){
                int sum1=0,sum2=0;
                sum1=sum1+a[i];
                sum2=sum2+a[i+1];
                a[count]=0;
                a[count]=sum1+sum2;
                count++;
            }
            return add(n/2,a);
        }
        else{
            int count=0;
            for(int i=0;i<n;i=i+2){
                int sum1=0,sum2=0;
                sum1=sum1+a[i];
                sum2=sum2+a[i+1];
                a[count]=0;
                a[count]=sum1+sum2;
                count++;
            }
            a[count]=a[n];
            return add(n/2+1,a);
        }
    }
    if(n==2){
        sum=a[0]+a[1];
        return sum;
    }
}
int main(){
    int n;
    cout<<"输入数的个数"<<endl;
    cin>>n;
    int *array=new int[n];
    cout<<"输入所有数"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    add(n,array);
    cout<<sum<<endl;
    delete[] array;
    return 0;
}
