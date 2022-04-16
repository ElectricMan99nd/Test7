#ifndef CBGV_H
#define CBGV_H

#include "Nguoi.h"

class CBGV: public Nguoi
{
    // thuoc tinh
         double luongCung;
         double thuong;
         double phat;
         double luongThucLinh;
public:
        // phuong thuc
        // ham khoi tao khong doi so
         CBGV();

        // ham nhap
         void nhapThongTin();

        // ham hien thi thong tin
         void hienThiThongTin();

        // ham lay ra thong tin ve luong thuc linh
         double getLuongThucLinh();
};

#endif // CBGV_H
