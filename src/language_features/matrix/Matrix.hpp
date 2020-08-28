#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
template <class T>
class Matrix
{
private:
    T *matrix;
    int rowsCount;
    int colsCount;

public:
    Matrix()
    {
        this(1, 1);
    }

    Matrix(const int row, const int col) : rowsCount(row),
                                           colsCount(col),
                                           matrix(new T[row * col])
    {
    }

    Matrix(const int row, const int col, const T f) : rowsCount(row),
                                                      colsCount(col),
                                                      matrix(new T[row * col])
    {
        for (auto &el : *this)
            el = f;
    }

    Matrix(const Matrix &m) : matrix(m.data()),
                              rowsCount(m.getRowsCount()),
                              colsCount(m.getColsCount())
    {
        std::cout << "Move failed \n";
    }

    Matrix(Matrix &&m) noexcept : matrix(std::move(m.matrix)),
                                  rowsCount(std::exchange(m.rowsCount, 0)),
                                  colsCount(std::exchange(m.colsCount, 0))
    {
    }

    T &at(const int row, const int col)
    {
        return matrix[row * colsCount + col];
    }

    T *data()
    {
        return matrix;
    }

    T *data() const
    {
        return matrix;
    }

    int capacity()
    {
        return sizeof(T) * rowsCount * colsCount;
    }

    T *begin()
    {
        return matrix;
    }

    T *end()
    {
        return matrix + rowsCount * colsCount;
    }

    void fill(T element)
    {
        for (auto &el : *this)
            el = element;
    }

    int getRowsCount()
    {
        return rowsCount;
    }

    int getRowsCount() const
    {
        return rowsCount;
    }

    int getColsCount()
    {
        return colsCount;
    }

    int getColsCount() const
    {
        return colsCount;
    }

    Matrix operator=(Matrix &&m) noexcept
    {
        if (this != &m)
        {
            matrix = std::move(m.data());
            rowsCount = std::exchange(m.rowsCount, 0);
            colsCount = std::exchange(m.colsCount, 0);
        }
        return *this;
    }

    std::string toString()
    {
        std::string result = "";
        for (int i = 0; i < rowsCount; i++)
        {
            for (int j = 0; j < colsCount; j++)
                result += std::to_string(matrix[i * colsCount + j]) + " ";
            result += '\n';
        }
        return result;
    }
};

#endif