// Shell Sort 
void shellSort(int arr[], int n) { 
    int i, j, temp, gap; 
    for (gap = n/2; gap > 0; gap /= 2) { 
        for (i = gap; i < n; i++) { 
            temp = arr[i]; 
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) { 
                arr[j] = arr[j - gap]; 
            } 
            arr[j] = temp; 
        } 
    } 
} 
 