#include "CBGV.h"

CBGV::CBGV()
{

}

// ham nhap
void CBGV::nhapThongTin() {
    Nguoi::nhapThongTin();
    cout << "\tNhap luong cung: "; cin >> luongCung;
    cout << "\tNhap thuong: "; cin >> thuong;
    cout << "\tNhap phat: "; cin >> phat;
    fflush(stdin);

    // tinh luong
    luongThucLinh = luongCung + thuong - phat;
}

// ham hien thi thong tin
void CBGV::hienThiThongTin() {
    Nguoi::hienThiThongTin();
    cout << "\tLuong cung: " << luongCung << endl;
    cout << "\tThuong: " << thuong << endl;
    cout << "\tPhat: " << phat << endl;
    cout << "\tLuong thuc linh: " << luongThucLinh << endl;


}

// ham lay ra thong tin ve luong thuc linh
double CBGV::getLuongThucLinh() {
    return luongThucLinh;
}
