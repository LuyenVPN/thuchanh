#include<stdio.h>
int main(){
	int a[100];
	int luachon;
	int n=0;
	
	while(1){
	printf("\n \t \tMENU \n \n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu \n");
	printf("2. In ra gia tri cac phan tu dang quan ly \n");
	printf("3. In ra gia tri lon nhat cua mang \n");
	printf("4. In ra cac phan tu la so nguyen to trong mang \n");
	printf("5. Them mot phan tu vao trong mang \n");
	printf("6. Xoa mot phan tu trong mang \n");
	printf("7. Sap xep mang theo thu tu tang dan \n");
	printf("8. Tim kiem phan tu (nguoi dung nhap) va in ra index cua phan tu do \n");
	printf("9. Thoat\n \n");
	printf("Lua chon cua ban: ");
	scanf("%d", &luachon);
	
	switch(luachon){
		case 1:{
			printf("nhap so phan tu can nhap: ");
			scanf("%d", &n);
			for(int i=0; i<n; i++){
			    printf("nhap gia tri cua phan tu thu %d la: ", i+1);
		    	scanf("%d", &a[i]);
		    }
			break;
		}
		case 2:{
			 if(n <= 0){
		    printf("Mang chua duoc tao \n");
			break;
			}else{
			printf("Cac gia tri cac phan tu dang quan ly la:  ");
			for(int i=0; i<n ; i++){
				printf("  %d  ", a[i]);
			}
			printf("\n");
			break;
		    }
    	}
		case 3:{
			if(n <= 0){
		    printf("Mang chua duoc tao \n");
			break;
			}else{
			int max= a[0];
			for(int i=0; i<n ; i++){
				if(a[i]> max){
				max= a[i];
			    }
		    }
	        	printf("Gia tri lon nhat cua phan tu la: %d ", max);
			break;
		    }
	    }
		case 4:{
	        if(n <= 0){
		    printf("Mang chua duoc tao \n");
			break;
			}else{
				int found = 0;
				printf("Cac phan tu la so nguyen to trong mang la : ");
				for(int i = 0 ; i < n ; i++){
					int so = a[i];
					int test = 1;
					if(so < 2){
						test = 0;
						}else{
							for(int i = 2 ; i*i <= so ; i++){
								if(so % i == 0){
									test = 0;
									break;
								}
							}
						}
						if(test){
							printf("%d \t",so);
							found = 1;
						}
					}
					if(!found){
						printf("Khong co so nguyen trong mang \n");
					}
				}
				break;
			}
		case 5 :{
			int so , vitri;
			printf("Nhap vao gia tri muon them vao : ");
			scanf("%d",&so);
			printf("Nhap vi tri muon them vao : ");
			scanf("%d",&vitri);
			if(0> vitri || vitri > n){
				printf("Vi tri them vao khong hop le \n");
				break;
				}
			for(int i = n ; i > vitri ; i--){
				a[i] = a[i-1];
				}
			a[vitri] = so;
			n++;
			printf("Mang sau khi them : \n");
			for(int i = 0 ; i < n ; i++){
				printf("%d \t",a[i]);
				}
			break;
		}
		case 6 :{
			int xoa;
			printf("Nhap vi tri muon xoa : ");
			scanf("%d",&xoa);
			if(0 > xoa || xoa > n){
				printf("Vi tri xoa khong hop le \n");
				break;
				}
			for(int i = xoa ; i < n - 1 ; i++){
				a[i] = a[i+1];
				}
			n--;
			printf("Mang sau khi xoa : \n");
			for(int i = 0 ; i < n ; i++){
				printf("%d \t",a[i]);
				}
			break;
		}
		case 7 :{
			for(int i = 0 ; i < n - 1 ; i++){
				int minIndex = i;
				for(int j = i + 1 ; j < n ; j++){
					if(a[j] < a[minIndex]){
		    			minIndex = j;
					}
				}
				int temp = a[minIndex];
				a[minIndex] = a[i];
				a[i] = temp;
			}
			printf("Mang sau khi sap xep la : ");
			for(int i = 0 ; i < n ; i++){
				printf("%d \t",a[i]);
			}
			break;
		}
		case 8 :{
		    int findValue;
			int hasFound = 0;
			printf("Nhap gia tri muon tim : ");
			scanf("%d",&findValue);
			for(int i = 0 ; i < n ; i++){
				if(a[i] == findValue){
					printf("Gia tri can tim o vi tri %d \n" , i+1);
					hasFound = 1;
				}
			}
			if(!hasFound){
				printf("Gia tri can tim khong co trong mang");
			}
			break;
		}
		case 9 :{
			printf("Thoat chuong trinh \n");
			break;
		}
		default :{
			printf("Vui long nhap lai tu 1 - 9\n");
			break;
		}
	}
	}
	return 0;
}
