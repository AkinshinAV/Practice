#include <iostream>
#include "plant.c"
#include "plant.h"
#include <vector>
#include <cmath>
#include <sstream>
#include <iomanip>
#include "windows.h"

using namespace std;
//�-�� ����a ������� U
/*double create_u(size_t k,size_t N)
{
    double u[k][N];
    for (int i=0; i<k; i++)
    {
        for (int j=0; j<N; j++)
        {
            cout << "enter U["<<i<<"]["<<j<<"]  ";
            cin >> u[i][j];
        }
    }
   return u;
}
void create_M(int k)
{
    double M[k];
    for (int i=0; i<k; i++)
    {
        cout<<"enter M["<<i<<"] 7,8,9 or 10  ";
        cin>>M[i];
    }

    //����� ��� ��������
    for (int i=0; i<k; i++){
        cout<<M[i];
    }


}


//plant_control(int kanal, double upr, Plant plant)
double delivery_of_impact(vector<vector<double>> u(N,vector<double>(k)), int k)
{
    for (int i=0; i<k; i++)
    {
        M[i]=plant_control(M[i],u[i][1],plant);
    }
    for (int i=0; i<k; i++)
    {
        cout<<"M["<<i<<"]=="<M[i]
    };
    return vector<vector<double>> u
}
*/

int main(int argc, char* argv[])
{
    //������������� ��
    //Plant plant();
    //plant_init(plant);
    size_t k; // ����� ������� ����������
    cout<<"enter number of control channels 1-4  ";
    cin>>k;
    size_t L; // ����� ������������� �������
    cout<<"enter polled sensor number 1, 2 or 3  ";
    cin>>L;
    size_t T; // ����� �������� ������
    cout<<"enter time pause (sec)  ";
    cin>>T;
    size_t J; // ����� ������� � �����
    cout<<"enter number of polls  ";
    cin>>J;
    size_t N; // ����� ����� �����
    cout<<"enter number of plan lines  ";
    cin>>N;

    double u[N][k];
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<k; j++)
        {
            cout << "enter U["<<i<<"]["<<j<<"]  ";
            cin >> u[i][j];
        }
    }

    double M[k];
    for (int i=0; i<k; i++)
    {
        cout<<"enter M["<<i<<"] 7,8,9 or 10  ";
        cin>>M[i];
    }

    for (int i=0; i<k; i++)
    {
        M[i]=plant_control(M[i],u[i][1],plant);
    }
    double y_sum=0;
    double y_sum_square=0;

    for(int i=0; i<N; i++)
    {
        //y[i]=pl�nt_measuare(L, plant);
        y_sum+=y[i];
        y_sum_square=y_sum_square+y[i]*y[i];
    }
    //������� ������� � ���������

    double y_middle=y_sum/j;
    double y_dispes=y_sum_square/(j-1);
    //����� �������, ��������� � ����� ��������
    for(int i=0; i<j; i++)
    {
        cout<<"y["<<i<<"]="<<y[i];
    }
    cout<<"y ������� = "<<y_middle<<endl<<"��������� Y = "<<y_dispes<<endl;
    Sleep(T*1000); // �������� � ���������� ����� � � ������ ������




    /*vector<vector<double>> u(N,vector<double>(k));
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<k; j++)
        {
            cout << "enter U["<<i<<"]["<<j<<"]  ";
            cin >> u[i][j];
        }
    }

    vector<double> M(k);
    for (int i=0; i<k; i++)
    {
        cout<<"enter M["<<i<<"] 7,8,9 or 10  ";
        cin>>M[i];
    }*/




    Sleep(T*1000); // �������� � ���������� ����� � � ������ ������
    vector<double> y(N);



    return 0;
}



