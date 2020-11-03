#include<iostream>
using namespace std;
class matrix
{
    int mat[3][3];
public:
    void getmatrix()
    {
        cout<<"Enter the elements of matrix serially:"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                 cin>>mat[i][j];
            }
        }
    }
    void showmatrix()
    {
        cout<<"The matrix elements are:"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[3][3];
               cout<<ends;
            }
       cout<<endl;
        }
    }
    friend matrix operator*(matrix,matrix);

};
matrix operator*(matrix m1,matrix m2)
{
    int sum,i,j,k;
    matrix temp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+m1.mat[i][k]*m2.mat[k][j];
            }
            temp.mat[i][j]=sum;
        }
    }
    return temp;
}

int main()
{
    class matrix A,B,C;
    A.getmatrix();
    B.getmatrix();
    C=A*B;
    C.showmatrix();
    return 0;
}
