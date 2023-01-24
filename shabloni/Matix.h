#pragma once
#include <iostream>
using namespace std;

template <typename T>
class MATRIX
{
private:
    T** M; // матрица
    int m; // количество строк
    int n; // количество столбцов

public:
    MATRIX()
    {
        n = 0; m = 0; M = 0;
    }
    MATRIX(int m1, int n1)
    {
        m = m1;
        n = n1;
        M = new T * [m];

        //Выделение памяти
        for (int i = 0; i < m; i++) {
            M[i] = new T[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                M[i][j] = 0;
            }
        }
        
    }

    //Конструктор копирования
    MATRIX(const MATRIX& MAT)
    {
        m = MAT.m;
        n = MAT.n;

        M = new T * [m];

        for (int i = 0; i < m; i++) {
            M[i] = new T[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                M[i][j] = MAT.M[i][j];
            }
        }
    }

    T GetMij(int i, int j)
    {
        if ((m > 0) && (n > 0)) {
            return M[i][j];
        }
        else
            return 0;
    }

    void SetMij(int i, int j, T temp)
    {
        if ((i < 0) || (i >= m))
            return;
        if ((j < 0) || (j >= n))
            return;
        M[i][j] = temp;
    }

    void Print(const char* a)
    {
        cout << "Number: " << a;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++) {
                cout << M[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "---------------------" << endl << endl;
    }

    // оператор копирования 
    MATRIX operator=(const MATRIX& MAT)
    {
        if (n > 0)  {
            //освобождение памяти
            for (int i = 0; i < m; i++) {
                delete[] M[i];
            }
        }
        if (m > 0) {
            delete[] M;
        }
        m = MAT.m;
        n = MAT.n;

        M = new T * [m]; 
        for (int i = 0; i < m; i++) {
            M[i] = new T[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                M[i][j] = MAT.M[i][j];
            }
        }
        return *this;
    }

    ~MATRIX() {
        for (int i = 0; i < m; i++) {
            delete[] M[i];
        }
        delete[] M;
    }

};

