// khai bao thu vien (preprocessor tien xu ly)
// stdio.h = standard input output (thu vien nhap xuat chuan)
// #include "stdio.h"
#include <stdio.h>

// return_value_type function_name (){}
int main (){
	
	// code o trong day
	// ham main la ham dac biet trong C. Chuong trinh se tu goi ham main khi run
	
	//ham printf la ham duoc viet san trong thu vien stdio.h. "Hello World" la doi so (argument) cua ham
	
	// printf("Hello World \n");
	// printf("\t Hello World");

	
	// yeu cau nhap vao 2 so a,b. Sau do in ra man hinh tong cua 2 so
	int a, b; // int: integer la kieu so nguyen
	
	printf ("nhap vao so a: ");
	scanf ("%d", &a); // d la digit
	
	printf ("Nhap vao so b: ");
	scanf ("%d", &b);
	
	printf("Tong cua a va b la: %d", a + b);
	
	return 0;
}
