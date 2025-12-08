#include <stdio.h>
//Viet chuong trinh nhap vao so va in ra thu tuong ung.
//VD: nhap so 2 => in 'thu 2' (dung switch)
int main(){
//int n;
//printf ("Nhap n: ");
//scanf ("%d", &n);
//
//switch(n){
//	case 1:
//		printf("chu nhat");
//		break;// dung de thoat khoi switch
//	case 2:
//		printf("thu 2");
//		break;
//	case 3:
//		printf("thu 3");
//		break;
//	case 4:
//		printf("thu 4");
//		break;
//	case 5:
//		printf("thu 5");
//		break;
//	case 6:
//		printf("thu 6");
//		break;
//	case 7:
//		printf("thu 7");
//		break;
//		default: // cac truong hop con lai
//			printf("chu nhat");
//}

//int thang, nam;
//printf ("Nhap thang: ");
//scanf ("%d", &thang);
//printf ("Nhap nam: ");
//scanf ("%d", &nam);
//
//if (thang >= 1 && thang <= 12){
//	switch(thang){
//		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//			printf("Thang %d nam %d co 31 ngay \n", thang, nam);
//			break;
//		case 4: case 6: case 9: case 11:
//			printf("Thang %d nam %d co 30 ngay \n", thang, nam);
//			break;
//		case 2:
//			// Kiem tra nam nhuan
//			if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
//				printf("thang %d nam %d co 29 ngay \n", thang, nam);
//			}else{
//				printf("thang %d nam %d co 28 ngay \n", thang, nam);
//			}
//		}
//	}

//float a, b, x;
//printf("nhap so b: ");
//scanf ("%f", &b);
//printf("nhap so a: ");
//scanf ("%f", &a);
//if (a == 0) { 
//	printf ("khong phai phuong trinh bac 1 \n");
//	} else { x = -b/a;
//		printf ("Nghiem cua phuong trinh la x = %.2f \n", x);
//	}


    float a, b, c, delta, x1, x2;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
        	}else {
            	printf("Phuong trinh bac nhat, nghiem x = %.2f", -c / b);
        	}
    	} else {
        delta = b*b - 4*a*c;
        if (delta < 0) { 
            	printf("Phuong trinh vo nghiem");
        	} else if (delta == 0) {
            x1 = -b / (2*a);
            	printf("Phuong trinh co nghiem kep x = %.2f", x1);
        	} else {
            	x1 = (-b + sqrt(delta)) / (2*a);
            	x2 = (-b - sqrt(delta)) / (2*a);
            	printf("Phuong trinh co 2 nghiem phan biet:\n");
            	printf("x1 = %.2f\n", x1);
            	printf("x2 = %.2f", x2);
        }
    }

//float a, b, c, delta, x1, x2;
//printf ("nhap a, b, c: ");
//scanf ("%f%f%f", &a, &b, &c);
//if (a == 0){
//	printf ("day khong phai la phuong trinh bac 2"); 
//	} else {
//		delta = b*b - 4 *a *c;
//		if (delta < 0){
//			printf ("Phuong trinh vo nghiem");
//			} else {
//				x1 = (-b + sqrt(delta)) / (2 * a); 
//				x2 = (-b - sqrt(delta)) / (2 * a);
//			printf ("phuong trinh co 2 nghiem: \n");
//			printf ("x1 = %.2f \n", x1);
//			printf ("x2 = %.2f \n", x2); 
//			} 
//		}	 

	
return 0;
}

