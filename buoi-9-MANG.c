#include <stdio.h>
/* Global variable (bien toan cuc) */

//int x = 50, y = 100;

/* function prototype */
//int tinhTong (int, int))

//dinh nghia ham truoc khi no duoc goi
//Truong hop 1: ham co tra ve du lieu
//a, b duoc goi la tham so (parameter)

//int tinhTong (a, b){	
//	return a + b;
//}

//Truong hop 2: ham khong co tra ve du lieu
//void sayHello(){
//	printf("Hello");
//}

/* 
	Thong thuong, nguoi ta su dung function prototype (nguyen mau ham) giup de code c de quan ly hon
	chung ta co the goi ham o trong ham hien hanh. Doi so khi truyen vao trong ham luc goi ham co 2 hinh thuc:
*/

/*
	1. truyen tham tri (pass by value)
	Khi chuong trinh chay, cac doi so co truyen vao trong ham se duoc copy thanh 1 ban rieng biet. 
	Va cac hanh vi tinh toan tren doi so nay se khong anh huong den gia tri cua bien truyen vao.
	
	2. Truyen tham chieu (pass by reference)
	trong c khong co khai niem nay. Co the truyen tham chieu bang cach dung con tro
*/

//void truyenThamTri (int a, int b){
//	a = 5;
//	b = 10;
//	printf ("a trong ham co gia tri la: %d \n", a);
//	printf ("b trong ham co gia tri la: %d \n", b);
//}
////*a la con tro tro den dia chi luu tru gia tri cua a trong bo nho RAM
//void truyenThamChieu (int *a, int *b){
//	*a = 5;
//	*b = 10;
//}


// Vi du truyen tham tri
//int a = 1, b = 2;
//	truyenThamTri(a, b);		
//printf ("gia tri cua a la: %d\n", a);
//printf ("gia tri cua b la: %d\n", b);


// Ham nhan tham so là con tro kieu int
//void modifyValue(int *ptr) {
//    *ptr = *ptr + 20; // Thay doi giá tri thong qua con tro
//}
//int main(){
//    int num = 10;
//    printf("Gia tri ban dau: %d\n", num);  
//// Goi ham và truyen dia chi cua num
//    modifyValue(&num); 
//    printf("Gia tri sau khi thay doi: %d\n", num);
//    
//    return 0;
//}


// Scope of variable (pham vi cua bien)
/*
	Neu khai bien trong 1 code block {} thi bien do se co pham vi cuc bo
		(local variable): chu trinh song cua no se chi ton tai khi thuc thi code block
		neu khai bao bien tren dau tap lenh thi bien do se co pham vi toan cuc
		(global variable): chu trinh song cua no se bat dau khi chuong trinh duoc chay den khi ket thuc chuong trinh
*/
//int main(){
//
//	int x = 50;
//	int y = 100;
//	printf ("x la: %d \n", x);
//	printf ("y la: %d", y);
//	
//return 0;
//}


//int main(){
/* Mang (array) 
	la tap hop nhieu phan tu (element of array) co cung 1 kieu du lieu
		+ mang 1 chieu
		+ mang da chieu (chu yeu la 2 chieu)
*/	


/* Mang (Array) */
// khai bao mang a co 100 phan tu la kieu so nguyen
	
//int a [100];
////khoi tao mang
//int a[5] = {0};
//	printf ("a[0] = %d \n", a[0]); //index /vi tri/ chi muc
//	printf ("a[1] = %d \n", a[1]);
//	printf ("a[2] = %d \n", a[2]);
//	printf ("a[3] = %d \n", a[3]);
//	printf ("a[4] = %d \n", a[4]);


/* 
	Khong thao tac, tinh toan den cac phan tu trong mang khi chung chua co gia tri
	neu gan gia tri cho phan tu thu 0 ma khong gan gia tri cho cac phan tu con lai
	thi chung mac dinh se bi gan bang 0
*/
//int main(){
//	int n;
//	printf ("Nhap so luong phan tu cua mang: ");
//	scanf ("%d", &n);
//	
////khoi tao mang a co phan tu la kieu so nguyen
//	int a[n];// cap phat dong
//	a[0] = 100;
//	printf ("a[0] = %d\n", a[0]);
//	printf ("size of: %d\n", sizeof a);
//	
////nhap mang bang vong lap for
//	int i;
//	for(i = 0; i < n; i++){
//		printf ("nhap phan tu thu: %d", i);
//		scanf ("%d", &a[i]);
//	}
//	
////xuat mang
//	for (i = 0; i < n; i++){
//		printf ("a[%d] = %d \n", i, a[i]);
//[[[	}
//return 0;
//}
//	
//int main (){
////bai tap tinh tong cac phan tu trong mang. Mang co 5 phan tu
////la kieu so nguyen. Gia tri cua cac phan tu nguoi dung nhap tu ban phim
//	int a[5], i, tong = 0;
//	for(i = 0; i < 5; i++){
//		printf ("a[%d] = ", i);
//		scanf ("%d", &a[i]);
//}
////tinh tong cac phan tu trong mang
//for (i = 0; i < 5; i++){
//		tong += a[i];
//	}
//	printf ("Tong la: %d", tong);
//	
//	return 0;
//}
//bai tap: tinh tong cac phan tu vi tri chan trong mang. Biet rang mang co 5 phan tu
//la kieu so nguyen. Gia tri cua cac phan tu dung tu nguoi nhap ban phim
//int main(){
//	int a[5], i, tong = 0;
//		for(i = 0; i < 5; i++){
//			printf ("a[%d] = ", i);
//			scanf ("%d", &a[i]);
//	
//		if(i % 2 == 0 && i != 0){
//			tong += a[i];
//	}
//	printf ("tong la : %d", tong);
//	}
//return 0;
//}


//bai tap: tinh tong cac phan tu co gia tri la so chan trong mang. Biet rang mang co 5 phan tu
//la kieu so nguyen. Gia tri cua cac phan tu dung tu nguoi nhap ban phim
//int main(){
//	int a[5], i, tong = 0;
//	for(i = 0; i < 5; i++){
//		printf ("a[%d] = ", i);
//	scanf ("%d", &a[i]);
//		
//	if(a[i] % 2 == 0){
//		tong += a[i];
//		}
//	}	
//	printf ("tong la : %d", tong);
//return 0;
//}



