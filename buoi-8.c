#include <stdio.h>
#include <time.h>
//Prototype
//void tongCongTich(int a, int b);
//Ðinh nghia

//void tongCongTich(int a, int b) {
//printf("Tong = %d\n", a + b);
//printf("Hieu = %d\n", a - b);
//printf("Tich = %d\n", a * b);
//}
//int tinhTong(int a, int b);
//int tinhHieu(int a, int b);
//int tinhTich(int a, int b);

// viet ham tinh tong 2 so
//	int tinhTong(){// khai bao ham
//	int a, b;
//	printf ("nhap a: ");
//	scanf ("%d", &a);
//	printf ("nhap b: ");
//	scanf ("%d", &b);
//
//	return a + b;
//}

//viet ham hieu 2 so
//void tinhHieu(){
//	int a, b;
//	printf ("nhap a: ");
//	scanf ("%d", &a);
//	printf ("nhap b: ");
//	scanf ("%d", &b);
//	
//	printf ("hieu la: %d", a - b);
////	return a - b;
//}

//	int tinhHieu(int a, int b) {
//	    return a - b;
//}

//viet ham tich 2 so
//int tinhTich(){
//	int a, b;
//	printf ("nhap a: ");
//	scanf ("%d", &a);
//	printf ("nhap b: ");
//	scanf ("%d", &b);
//	
//	printf ("tich la: %d", a * b);
//}

//viet ham thuong 2 so
//float tinhThuong(){
//  int a, b;
//	printf ("nhap a: ");
//	scanf ("%d", &a);
//	printf ("nhap b: ");
//	scanf ("%d", &b);
//    
//	return (float) a / b;
//}

//Function prototype
//int tongCongTich();
//int tinhTong();
//void tinhHieu();
//int tinhTich();
//float tinhThuong();

// return 1; loi file
// return 2; loi truy xuat
// syntax erro: loi cu phap
// loi runtime: loi xay ra trong qua trinh thuc thi

//int main(){// kieu_du_lieu ten_ham
//	//function call (loi goi ham)
//// Prototype
//void tongCongTich(int a, int b);
//// Ðinh nghia
//void tongCongTich(int a, int b) {
//    printf("Tong = %d\n", a + b);
//    printf("Hieu = %d\n", a - b);
//    printf("Tich = %d\n", a * b);
//}

//int main(){ //tongCongTich
//    int a, b;
//    printf("Nhap a: ");
//    scanf("%d", &a);
//    printf("Nhap b: ");
//    scanf("%d", &b);
//
//    tongCongTich(a, b);  // goi hàm

//	int tong;
//	tong = tinhTong ();
//	printf ("Tong la: %d", tong);

//int a, b;
//   printf("Nhap a: ");
//   scanf("%d", &a);
//   printf("Nhap b: ");
//   scanf("%d", &b);
//
//    printf("Hieu la: %d\n", tinhHieu(a, b));

//	int tich;
//	tich = tinhTich();
//	printf ("Tich la: %d", tich);

//	float thuong;
//	thuong = tinhThuong();
//	printf ("Thuong la: %.2f", thuong);
			
//	return 0;
//}
int tinhTuoi(int namSinh){
    return 2025 - namSinh; 
}

int main(){
    int namSinh;
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Tuoi cua ban la: %d\n", tinhTuoi(namSinh));
    return 0;

return 0;
}












