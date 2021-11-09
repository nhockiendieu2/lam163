#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap vao so nguyen a ="); scanf("%d",&a);
	printf("Nhap vao so nguyen b ="); scanf("%d",&b);
	printf("Nhap vao so nguyen c ="); scanf("%d",&c);
	if(a>b)
		{	
			if(a>c)
			printf("a la so lon nhat");
			else
			printf("c la so lon nhat");
		}	
	else
		{
			if(b>c)
			printf("b la so lon nhat");
			else
			printf("c la so lon nhat");
		}	
			
}
