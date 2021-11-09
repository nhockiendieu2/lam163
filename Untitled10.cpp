#include<stdio.h>
int main()
{
  int n;
  long S;
  S = 0;
  n = 1;
  printf("\nNhap vào so n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i+=2)
    {
        S = S + i;
    }
  printf("\nTong 1 + 3 +5 ... + (S+2*i+1)%d là %ld: ", n, S);
 
  printf("\n-------------------------\n");
}

