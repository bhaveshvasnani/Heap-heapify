#include <stdio.h>
#include <math.h>
void max_heapify(int A[],int i)
{
	int a=6;
	int largest,temp;
	int l=2*i+1;
	int r=2*i+2;
	if (l<a && A[l]>A[i])
		largest=l;
	else
		largest=i;
	if (r<a && A[r]>A[largest])
		largest=r;
	if (largest!=i)
	{
		temp=A[largest];
		A[largest]=A[i];
		A[i]=temp;
		max_heapify(A,largest);
	}
}
void build_max_heap(int A,int i)
{
	int a=6;
	for (i=(floor)(a/2)-1;i>=0;i--)
		max_heapify(A,i);
}
void min_heapify(int A[],int i)
{
	int a=6;
	int smallest,temp;
	int l=2*i+1;
	int r=2*i+2;
	if (l<a && A[l]<A[i])
		smallest=l;
	else
		smallest=i;
	if (r<a && A[r]<A[smallest])
		smallest=r;
	if (smallest!=i)
	{
		temp=A[smallest];
		A[smallest]=A[i];
		A[i]=temp;
		min_heapify(A,smallest);
	}
}
void build_min_heap(int A,int i)
{
	int a=6;
	for (i=(floor)(a/2)-1;i>=0;i--)
		min_heapify(A,i);
}
main()
{
	int i,A[6]={1,33,2,65,7,0};
	build_max_heap(A,0);
	printf("\nMAX HEAP\n");
	for (i=0;i<=5;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nMIN HEAP\n");
	build_min_heap(A,0);
	for (i=0;i<=5;i++)
	{
		printf("%d\t",A[i]);
	}
}

