#include <iostream>
using namespace std;
int main()
{
    int rows;
    int cols;
    cout<<"���������������"<<endl;
    cin>>rows>>cols;
    int **array;
    array=new int* [rows];
    for(int i=0;i<rows;i++){
        array[i]=new int[cols];
    }
    cout<<"���������:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>array[i][j];
        }
    }
    int* mul=new int[cols];
    int* result=new int[rows];
    cout<<"����������"<<endl;
    for(int i=0;i<cols;i++){
        cin>>mul[i];
    }
    for(int i=0;i<rows;i++){//���з���
        result[i]=0;
        for(int j=0;j<cols;j++){
            result[i]+=array[i][j]*mul[j];
        }
    }
    cout<<"�ڻ����þ���Ϊ:"<<endl;
    for(int i=0;i<rows;i++){
        cout<<result[i]<<endl;
    }
    for(int i=0;i<rows;i++){
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
