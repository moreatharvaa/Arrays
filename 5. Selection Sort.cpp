void selectionSort(vector<int>&arr) {
    // Write your code here.
    // int n = arr.size();

    // for(int i=0;i<n;i++){
    //     int min=i;

    //     for(int j=i;j<n;j++){
    //         if(arr[min]>arr[j]){
    //             min=j;
    //         }
    //     }
    //     // swap(arr[i], arr[min]);
    //     int temp = arr[min];
    //     arr[min] = arr[i];
    //     arr[i] = temp;

    // }

    int n = arr.size();

    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
   
}
