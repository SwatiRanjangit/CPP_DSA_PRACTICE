 long long merge(long long arr[], long long temp[], int start, int mid, int end) {
    int i = start, j = mid + 1, k = start;
    long long count = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= end) {
        temp[k++] = arr[j++];
    }

    for (i = start; i <= end; i++) {
        arr[i] = temp[i];
    }

    return count;
}

long long mergeSort(long long arr[], long long temp[], int start, int end) {
    if (start >= end) return 0;

    long long count = 0;
    int mid = start + (end - start) / 2;

    count += mergeSort(arr, temp, start, mid);
    count += mergeSort(arr, temp, mid + 1, end);
    count += merge(arr, temp, start, mid, end);

    return count;
}

long long inversionCount(long long arr[], long long N) {
    long long count = 0;
    long long temp[N];

    count = mergeSort(arr, temp, 0, N - 1);
    return count;
}