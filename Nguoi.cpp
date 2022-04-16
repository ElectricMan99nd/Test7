#include "Nguoi.h"

Nguoi::Nguoi()
{

}

// ham khoi tao co doi so
Nguoi::Nguoi(string hoTen, string ngaySinh, string queQuan) {
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->queQuan = queQuan;
}

// ham nhap thong tin
void Nguoi::nhapThongTin() {
     cout << "\tNhap ho ten: "; getline(cin, hoTen);
     cout << "\tNhap ngay sinh: "; getline(cin, ngaySinh);
     cout << "\tNhap que quan: "; getline(cin, queQuan);

}

// ham hien thi
void Nguoi::hienThiThongTin() {
     cout << "\tHo ten: " << hoTen << endl;
     cout << "\tNgay sinh: " << ngaySinh << endl;
     cout << "\tQue quan: " << queQuan << endl;

}
