#include <iostream>

using namespace std;

    /*NhanVien nv1 = {123, "Nguyen Van A", 10000000, 19};
    NhanVien nv2 = {124, "Nguyen Van B", 12000000, 21};
    NhanVien nv3 = {125, "Nguyen Van C", 15000000, 15};
    NhanVien nv4 = {126, "Nguyen Van D", 12000000, 17};
    NhanVien nv5 = {127, "Nguyen Van F", 7000000, 22};
    NhanVien nv6 = {128, "Nguyen Van G", 8000000, 27};
    NhanVien nv7 = {129, "Nguyen Van H", 9000000, 17};
    NhanVien nv8 = {130, "Nguyen Van K", 10000000, 16};
    NhanVien nv9 = {131, "Nguyen Van L", 6000000, 15};
    NhanVien nv10 = {132, "Nguyen Van M", 11000000, 12};*/

struct NhanVien {
    int maNv;
    string hoTen;//char hoTen[100];
    float luongCB;
    int soNg;
    float luongHT;
    float luongTB;
};

NhanVien nv[] = {
        {123, "Nguyen Van A", 10000, 19},
        {124, "Nguyen Van B", 12000, 21},
        {125, "Nguyen Van C", 15000, 15},
        {126, "Nguyen Van D", 12000, 17},
        {127, "Nguyen Van F", 7000, 22},
        {128, "Nguyen Van G", 8000, 27},
        {129, "Nguyen Van H", 9000, 17},
        {130, "Nguyen Van K", 10000, 16},
        {131, "Nguyen Van L", 6000, 15},
        {132, "Nguyen Van M", 11000, 12}
    };

// Cau 1
//input: NhanVien* arrNV, int sl
//output: NhanVien* arrNV đã được cập nhật data
void initArrNV(NhanVien* arrNV, int sl){
   for (int i = 0; i < sl; ++i) {
        arrNV[i].maNv = nv[i].maNv;
        arrNV[i].hoTen = nv[i].hoTen;
        arrNV[i].luongCB = nv[i].luongCB;
        arrNV[i].soNg = nv[i].soNg;
        arrNV[i].luongHT = 0; // nv[i].luongCB +nv[i].soNg*18000;
        arrNV[i].luongTB = 0;
    }
};

// Cau 2
//input: NhanVien* arrNV, int sl
void printArrNV(NhanVien* arrNV, int sl) {
    for (int i = 0; i < sl; ++i) {
        cout << "Ma NV: " << arrNV[i].maNv <<  " ";
        cout << "Ho Ten: " << arrNV[i].hoTen << " ";
        cout << "Luong CB: " << arrNV[i].luongCB << " ";
        cout << "So Ng: " << arrNV[i].soNg << " ";
        cout << "Luong HT: " << arrNV[i].luongHT <<endl;
    }
}

// Cau 3
//input: NhanVien* arrNV, int sl
//output: NhanVien* arrNV đã được tính luongHT
void tinhLuongArrNV(NhanVien* arrNV, int sl){
    for (int i = 0; i < sl; ++i) {
        arrNV[i].luongHT = nv[i].luongCB +nv[i].soNg*18000;
    }
}

// Cau 4
//input: NhanVien* arrNV, int sl
//output: NhanVien* arrNV đã được tính luong toan bo, va tong toan bo luong cua tat ca nhan vien

float tinhLuongToanBoArrNV(NhanVien* arrNV, int sl){
    float luongTongPhaiTra = 0;
    for (int i = 0; i < sl; ++i) {
        if (arrNV[i].luongHT > 8000000){
            arrNV[i].luongTB = arrNV[i].luongHT + arrNV[i].luongHT*0.05;
        }else if (arrNV[i].luongCB <5000000){
            arrNV[i].luongTB = arrNV[i].luongHT + arrNV[i].luongHT*0.1;
        }else {
            arrNV[i].luongTB = arrNV[i].luongHT;
        }
    }

    for (int i = 0; i < sl; ++i) {
        luongTongPhaiTra += arrNV[i].luongTB;
    }
    cout << "Luong Tong Phai Chi Tra La - " << luongTongPhaiTra  << endl;
    return luongTongPhaiTra;
}

// Cau 5
//input: NhanVien* arrNV, int sl
//output: NhanVien* arrNV đã được tính voi nhan vien luong < 5 trieu
float tinhLuongNhanVienThapArrNV(NhanVien* arrNV, int sl){
    float luongTongPhaiTra = 0;
     for (int i = 0; i < sl; ++i) {
        if (arrNV[i].luongCB < 5000000){
            luongTongPhaiTra += arrNV[i].luongTB;
        }
     }
    cout << "Luong Nhan Vien 5000000 Phai Chi Tra La - " << luongTongPhaiTra  << endl;
     return luongTongPhaiTra;
}

// Cau 6
// input: NhanVien* arrNV, int sl, int maNv
// output: nhan vien co ma duoc tim thay hoac khong tim thay
void timNhanVienBangId(NhanVien* arrNV, int sl, int maNv) {
    bool found = false;
    for (int i = 0; i < sl; ++i) {
        if (arrNV[i].maNv == maNv) {
            cout << "Tim thay ma nhan vien: " << endl;
            cout << "Ma NV: " << arrNV[i].maNv << " ";
            cout << "Ho Ten: " << arrNV[i].hoTen << " ";
            cout << "Luong CB: " << arrNV[i].luongCB << " ";
            cout << "So Ng: " << arrNV[i].soNg << " ";
            cout << "Luong HT: " << arrNV[i].luongHT << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Ma nhan vien " << maNv << " khong tim thay." << endl;
    }
}

int main()
{

    int sl = 10; //so luong nhan vien
    NhanVien *arrNV = new NhanVien[sl];;//mang co kieu du lieu la struct NhanVien

    // Cau 1
    // viet ham dua du lieu vao (input du lieu vao) (tuc la cho user input vao, sau do luu len NhanVien arrNV[100]
    initArrNV(arrNV, sl);

    // Cau 2
    // viet ham nay ben ngoai ham main, dua vao mang chua nhan vien va so luong nhan vien da dua vao ben tren, in ra data cac nhan vien do
    printArrNV(arrNV, sl);

    // Cau 3
    tinhLuongArrNV(arrNV, sl);
    printArrNV(arrNV, sl);

    // Cau 4
    tinhLuongToanBoArrNV(arrNV, sl);
    printArrNV(arrNV, sl);

    // Cau 5
    tinhLuongNhanVienThapArrNV(arrNV, sl);
    printArrNV(arrNV, sl);

    // Cau 6
    int nhanVienId;
    cout << "Nhap ma nhan vien de tim";
    cin >> nhanVienId;
    timNhanVienBangId(arrNV, sl, nhanVienId);

    // Clean up memory: khac biet giua delete[] arrNV va delete arrNV ?
    delete[] arrNV;

    return 0;
}
