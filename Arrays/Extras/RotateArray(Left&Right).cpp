void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k > n

    reverse(arr, 0, n - 1); // Reverse the whole array
    reverse(arr, 0, k - 1); // Reverse the first k elements
    reverse(arr, k, n - 1); // Reverse the remaining elements
}


// Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  reverse(arr, k, n - 1);
  // Reverse whole array
  reverse(arr, 0, n - 1);
}

