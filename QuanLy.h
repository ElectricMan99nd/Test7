#ifndef QUANLY_H
#define QUANLY_H

#include "CBGV.h"
#include <list>

class QuanLy
{
    // thuoc tinh
         list<CBGV> ds;
         CBGV canBo;
public:
        // phuong thuc
        // ham khoi tao
         QuanLy();

        // ham them can bo vao danh sach
         void themCBGV(CBGV canBo);

        // ham nhap vao danh sach
         void nhapDanhSach();

        // ham hien thi danh sach
         void hienThiDanhSach();

        // ham tim kiem
         void timKiem(double luong);
};

#endif // QUANLY_H
