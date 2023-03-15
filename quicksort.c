#include <stdio.h>


void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
    int j;
	for (j = low; j <= high - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);  
	return (i + 1);
}


void quicksort(int Arr[], int low, int high)
{
	if (low < high) {
		
		int pi = partition(Arr, low, high);
		quicksort(Arr, low, pi - 1);
		quicksort(Arr, pi + 1, high);           
	}
}

int main()
{
	int size;
	scanf("%d",&size);

	int array[100];
	printf("Enter the Array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}

	quicksort(array, 0, size - 1);
    
    int i;
	for(i = 0; i < size; i++) {
		printf("%d ",array[i]);
	}
}

