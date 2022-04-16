#include "QuanLy.h"

QuanLy::QuanLy()
{

}

void QuanLy::themCBGV(CBGV canBo) {
   ds.push_back(canBo);
}

// ham nhap vao danh sach
void QuanLy::nhapDanhSach() {
    int soLuongCanBo;
   cout << "Nhap vao so luong can bo: "; cin >> soLuongCanBo;
   fflush(stdin);
   cout << "*****Nhap vao danh sach*****" << endl;
   for (int i = 0; i < soLuongCanBo; i++) {
      cout << "Can bo thu " << (i +1)  << ":" << endl;
       canBo.nhapThongTin();
       themCBGV(canBo);
   }
}

// ham hien thi danh sach
void QuanLy::hienThiDanhSach() {
   for (CBGV cb : ds) {
       cb.hienThiThongTin();
   }
}

// ham tim kiem
void QuanLy::timKiem(double luong) {
    int i = 0;
   for (CBGV cb : ds) {
       if (cb.getLuongThucLinh() >= luong) {
           i++;
           cout << "Can bo thu " << i  << ":" << endl;
           cb.hienThiThongTin();
       }
   }
}
