//  pd midterm project

#include <iostream>
using namespace std;

int fun(int);

int main() {
    int n = 0, m = 0, w = 0, d = 0;
    cin >> n >> m >> w >> d;
    int* X = new int [m];
    int* Y = new int [m];
    int* R = new int [m];
    int* P = new int [m];
    for(int i = 0; i < m; i++)
        cin >> X[i];
    for(int i = 0; i < m; i++)
        cin >> Y[i];
    for(int i = 0; i < m; i++)
        cin >> R[i];
    for(int i = 0; i < m; i++)
        cin >> P[i];
    
    //delete statements
    delete [] X;
    delete [] Y;
    delete [] R;
    delete [] P;
    return 0;
}

int fun(int a)
{
    return 0 ;
}
