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
void initArrNV(NhanVien* arrNV, int sl){
   for (int i = 0; i < sl; ++i) {
        arrNV[i].maNv = nv[i].maNv;
        arrNV[i].hoTen = nv[i].hoTen;
        arrNV[i].luongCB = nv[i].luongCB;
        arrNV[i].soNg = nv[i].soNg;
        arrNV[i].luongHT = nv[i].luongCB +nv[i].soNg*18000;
    }
};

// Cau 2
void printArrNV(NhanVien* arrNV, int sl) {
    for (int i = 0; i < sl; ++i) {
        cout << "Ma NV: " << arrNV[i].maNv <<  " ";
        cout << "Ho Ten: " << arrNV[i].hoTen << " ";
        cout << "Luong CB: " << arrNV[i].luongCB << " ";
        cout << "So Ng: " << arrNV[i].soNg << " ";
        cout << "Luong HT: " << arrNV[i].luongHT <<endl;
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

    // Clean up memory: khac biet giua delete[] arrNV va delete arrNV ?
    delete[] arrNV;


    // Cau 3
    // tinhLuongArrNV(arrNV, sl);
    //

    return 0;
}
