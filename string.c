#include <stdio.h>
#include <string.h>

int main(){
	/* 
		string (chuoi): mang cac ky tu
	*/
	//	char str [1000]; //khai bao
	//	char str [1000] = "le duy vu";
	//	printf ("%s", str);
	
//	char name[1000];// cap phat 1000 byte
//	printf ("nhap ho va ten: ");
//	scanf ("%s", name);
//	fgets(name, sizeof(name), stdin);// sizeof la in ra kich thuoc cua  bien do
//	printf ("ho ten la: %s", name);// doi so la name
	
	char str[5] = "Hello Word";
//	printf ("%d", sizeof(str));
	printf ("ky tu dau tien la: %c\n", str[0]);
	printf ("ky tu cuoi cung la: %c\n", str[4]);
	
// Luu y: trong c; vi tri cuoi cung la "\0" danh dau su ket thuc 
// cua chuoi

	int i = 0; 
//	for (i = 0; i <= 4; i++){
//		printf ("%c \n", str[i]);
//	}
	while (str[i]) != '\0'){
		i++;
//		count++;
	}
	
//	printf("so luong ky tu la: %d", i); //ket qua la 11
//	printf("so luong ky tu la: %d", strlen(str));

	int i, count;
	for(i = 0; i < strlen(str); i++)){
		int phanTuCuoi = strlen(str) - 1; //do dai str - 1 se la vi tri cuoi cung
		if(str[phanTuCuoi] == 'o'){
//			printf("co xuat hien ky tu o tai vi tri %d \n", i);
//			break;
		count++;
		}
	}
	printf("co %d ky tu o duoc tim thay", count);
	return 0;
}
