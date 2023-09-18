/******************************************************************************
Tehnička škola Pirot
Vežba - 1.3 - Invertovanje niza
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a[100], i, j, p;
	printf("unesi broj elemenata niza: ");
	scanf("%d", &n);
	printf("unesi elemenate niza:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	// invertovanje niza 
	for (i = 0, j = n - 1; i < n / 2 ; i++, j--) //(moze i i<j)
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
	}
	printf("Invertovani niz:\n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}