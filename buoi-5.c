#include <stdio.h>

int main(){
//1.Viet chuong trình nhap vào 2 so nguyên a, b.neu a lon hon b thì hoán doi giá tri a và b, nguoc lai thì không hoán doi, in ra giá tri a,b trong c
//	int a, b, temp;
//	printf ("Nhap a: ");
//	scanf ("%d", &a);
//	printf ("Nhap b: ");
//	scanf ("%d", &b);
//	if (a > b){
//		int temp = a;
//			a = b;
//			b = temp;
//	}
//	printf("Gia tri sau khi xu ly: a = %d, b = %d\n", a, b);

//2.Viet chuong trình nhap vào 2 so nguyên a, b.in ra thong bao "a bang b" neu a = b, nguoc lai in ra thong bao "a khac b"
//int a, b;
//printf ("Nhap a, b: ");
//scanf ("%d%d", &a, &b);
//if (a == b){
//	printf ("a bang b\n");
//}else{
//	printf ("a khac b\n");
//}

//3.Viet chuong trinh nhap vao ki tu c. Kiem tra xem neu ki tu nhap vao la ki tu thuong trong khoang tu 'a' den 'z' thi doi sang chu in hoa va in ra
//nguoc lai in ra thong bao "ki tu chung ta vua nhap la: c"

//char c;
//printf("Nhap ki tu: ");
//scanf("%c", &c);
//printf ("gia tri so cua ky tu c la: %d\n", c);
//if(c >= 'a' && c <= 'z'){
//	c = c - 32;
//		c -=32;
//	printf("ki tu viet hoa cua c la %c", c);
//} else {
//	printf("Ki tu chung ta vua nhap la: %c\n", c);
//}

//4.Viet chuong trinh nhap vao ki tu c. Kiem tra xem neu ki tu nhap vao la ki tu thuong trong khoang tu 'a' den 'z' thi doi sang chu in hoa va in ra
//neu ki tu in hoa trong khoang A den Z thi doi sang chu thuong va in ra
//neu ki tu la so 0 den 9 thi in ra cau "ki tu chung ta vua nhap la so...(in ra ki tu c)"
//con lai khong phai 3 truong hop tren in ra thong bao "chung ta da nhap ki tu...(in ra ki tu c)"

//char c;
//printf ("nhap ki tu: ");
//scanf ("%c", &c);
//if (c >= 'a' && c <= 'z') {
//    char upper = c - 32; 
//    printf("Ki tu sau khi doi sang in hoa la: %c\n", upper);
//}else if (c >= 'A' && c <= 'Z') {
//	char lower = c + 32; 
//	printf("Ki tu sau khi doi sang chu thuong la: %c\n", lower);
//}else if (c >= '0' && c <= '9') {
//	printf("Ki tu chung ta vua nhap la so %c\n", c);
//}else {
//	printf("Chung ta da nhap ki tu %c\n", c);
//}

//5.Viet chuong trinh nhap vao gia ve va tuoi sau do tinh tien mien giam neu:
//tuoi <= 15 tuoi thi mien giam nhu sau:
//duoi 6 tuoi mien giam 50% gia ve
//tu 6 den 10 tuoi mien giam 30% gia ve
//tu 10 den 15 tuoi mien giam 15% gia ve
//tren 15 tuoi khong duoc mien giam gia ve

//float giaVe, tienPhaiTra; // Cu phap lac da
//int tuoi;

//printf("Nhap gia ve: ");
//scanf("%f", &giaVe);
//printf("Nhap tuoi: ");
//scanf("%d", &tuoi);

//	if (tuoi < 6){
//		tienPhaiTra = giaVe * 0.5; // giam 50%
//
//	}else if (tuoi >= 6 && tuoi <= 10){ // Lap Trinh Tuong Minh
//    	tienPhaiTra = giaVe * 0.3; // giam 30%
//  
//	}else if (tuoi > 11 && tuoi <= 15){ // Lap Trinh Tuong Minh
//    	tienPhaiTra = giaVe * 0.15; // giam 15%
//	}else{
//   		tienPhaiTra = giaVe; // không giam
//}
////In ket qua
//	 printf("Tien phai tra la: %.2f\n", tienPhaiTra);

//6. Viet chuong trinh nhap vao diem cua mot hoc sinh. In ra xep loai hoc tap cua hoc sinh do. Cach xep loai: 
//Neu diem >=9, xuat sac.
//Neu diem tu 8 den can 9, gioi. 
//Neu diem tu 7 den can 8, kha. 
//Neu diem tu 6 den can 7, TB kha.
//Neu diem tu 5 den can 6, Tbinh.
//Con lai la yeu
//Kiem tra tinh hop le cua diem (diem >= 0 va diem < = 10)

//float diem;
////Nhap diem
//   printf("Nhap diem hoc sinh (0 - 10): ");
//   scanf("%f", &diem);
////Kiem tra tinh hop le
//    if (diem < 0 || diem > 10) {
//        printf("Diem khong hop le!\n");
//    } else {
////Xep loai theo thang diem
//        if (diem >= 9) {
//            printf("Xep loai: Xuat sac\n");
//        } else if (diem >= 8) {
//            printf("Xep loai: Gioi\n");
//        } else if (diem >= 7) {
//            printf("Xep loai: Kha\n");
//        } else if (diem >= 6) {
//            printf("Xep loai: Trung binh kha\n");
//        } else if (diem >= 5) {
//            printf("Xep loai: Trung binh\n");
//        } else {
//            printf("Xep loai: Yeu\n");
//        }
//	}

	return 0;
}
