int sorted(vector<int> a, int n) {
    // int start = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return 0; // Not sorted
        }
        if (a[i] == a[i - 1]) {
            continue; // Equal elements, continue checking
        }
    }
    return 1; // Sorted
}

int isSorted(int n, vector<int> a) {
    int sort = sorted(a, n);
    return sort;
}
