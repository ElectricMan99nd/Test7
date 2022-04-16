#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
#include <string.h>
using namespace std;

class Nguoi
{
protected:
    // thuoc tinh
         string hoTen;
         string ngaySinh;
         string queQuan;
public:
        // phuong thuc
        // ham khoi tao khong so
         Nguoi();
        // ham khoi tao co doi so
         Nguoi(string hoTen, string ngaySinh, string queQuan);

        // ham nhap thong tin
         void nhapThongTin();

        // ham hien thi
         void hienThiThongTin();
};

#endif // NGUOI_H
