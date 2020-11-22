// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double S0(const int N, const int k)
{
    double s = 0;
    for (int k = N; k <= 25; k++)
        s += sqrt(1 + (N*1. / k));
    return s;
}
double S1(const int N, const int i, const int k)
{
    if (k > N)
        return 0;
    else
        return  sqrt(1 + (N * 1.) / k) + S1( N,i,k+1);
}
double S2(const int N, const int i, const int k)
{
    if (k < N)
        return 0;
    else
        return sqrt(1 + (N * 1.) / k) + S2(N,i,k-1);
}
double S3(const int N, const int i, const int k, double t)
{
    t = t + sqrt(1 + (N * 1.) / k);
    if (k >= N)
        return t;
    else
        return S3( N, i,k+1, t);
}
double S4(const int N, const int i, const int k, double t)
{
    t = t + sqrt(1 + (N * 1.) / k);
    if (k <= N)
        return t;
    else
        return S4( N, i,k-1, t);
}
int main()
{
    int N,k;
    cout << "N = "; cin >> N;
    cout << "k = "; cin >> k;
    cout << "(iter) S0 = " << S0(k,N) << endl;
    cout << "(rec up ++) S1 = " << S1(N, k, N) << endl;
    cout << "(rec up --) S2 = " << S2(k, N, k) << endl;
    cout << "(rec down ++) S3 = " << S3(N, k, N, 0) << endl;
    cout << "(rec down --) S4 = " << S4(k, N, k, 0) << endl;

    return 0;
}