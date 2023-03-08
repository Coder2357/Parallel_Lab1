#include <iostream>
using namespace std;
int main()
{
    int rows;
    int cols;
    cout<<"输入矩阵行数列数"<<endl;
    cin>>rows>>cols;
    int **array;
    array=new int* [rows];
    for(int i=0;i<rows;i++){
        array[i]=new int[cols];
    }
    cout<<"请输入矩阵:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>array[i][j];
        }
    }
    int* mul=new int[cols];
    int* result=new int[rows];
    cout<<"请输入向量"<<endl;
    for(int i=0;i<cols;i++){
        cin>>mul[i];
    }
    for(int i=0;i<rows;i++){//逐行访问
        result[i]=0;
        for(int j=0;j<cols;j++){
            result[i]+=array[i][j]*mul[j];
        }
    }
    cout<<"内积所得矩阵为:"<<endl;
    for(int i=0;i<rows;i++){
        cout<<result[i]<<endl;
    }
    for(int i=0;i<rows;i++){
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
