#include <stdio.h>
#include <math.h>

int main(){
// vong lap for
// in ra man hinh cac so tu 1 -10
// i la index (chi muc)
// bieu thuc 1: chi chay 1 lan duy nhat trong vong lap for

//	int i;
//	for(i = 1; i <= 10; i++){
////		continue;
//		printf("%d \n", i);
// }
//co cach nao khac de thoat khoi vong lap hay khong
//Co, dung break

//bai tap 1: in ra man hinh cac so chan tu 1 -10, dung vong lap for
//int i; //Buoc nhay cua i
//	for (i = 2; i <= 10; i = i + 2){
//		if ( i % 2 == 0){
//			printf ("%d \n", i);
//		}
//	}	

//int i;
// for (i = 1; i <= 10; i++){
// 		printf ("%d", i);
// }


//S = 1 + 2 + 3 +...+n
//int n, i;
//scanf("%d", &n);
//int sum = 0;
//	for(i = 1; i <= n - 1; i++)
//		sum += i;
//	printf ("%d", sum);

int n, i;
scanf ("%d", &n);

for (i = 0; i <= n; i++){
		if (i % 3 == 0){
			printf ("%d", i);
		}
	}

//bai tap 2: tinh tong cac so chan tu 1 - n voi n nhap tu ban phim
//int n, tong = 0, i;
//printf ("nhap n: ");
//scanf ("%d", &n);
////=> tong = 1 + 2 + 3 + 4 + 5 = 
//	for (i = 1; i <= n; i++){
//		tong = tong + i; 	
//	}	
//	printf ("tong la: %d", tong);
	
//bai tap 3: tinh tong cac so le tu 1 - n voi n nhap tu ban phim
//int n, tong = 0, i;
//printf ("nhap n: ");
//scanf ("%d", &n);
////=> tong = 1 + 2 + 3 + 4 + 5 = 
//	for (i = 1; i <= n; i = i + 2){
////		tong = tong + i;
//		tong += i; 			
//	}	
//	printf ("tong la: %d", tong);

//bai tap 3: tinh tong cac so chan tu 1 - n voi n nhap tu ban phim
//int n, tong = 0, i;
//printf ("nhap n: ");
//scanf ("%d", &n);
////=> tong = 1 + 2 + 3 + 4 + 5 = 
//	for (i = 0; i <= n; i = i + 2){
////		tong = tong + i;
//		tong += i; 			
//	}	
//	printf ("tong la: %d", tong);

//vong lap while
//while (condition){
////code block
//}

//int n = 1;
//while (n <= 10){
//	printf ("%d", n);
//	n++;
//}
////vong lap do while
//do {
////block code
//}while(condition)

//	int n = 1;
//	do{
//		printf ("hello \n"); 
//		n++;
//	}while(n <= 10); 

//int i;
//for (i = 1; ; ){
//	printf ("hello");
//}

//bai tap: su dung vong lap do while de in ra cac so 1-10 (khong in ra so 2)
//int i = 1;
//	do {
//		if (i != 2){
//			printf ("%d\n", i);} i++;
//	}while(i <= 10); 
	
return 0;
}
