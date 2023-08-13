int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot  = input[start];
	int i = start;
	int j = end;
	while(i<j){
		while(input[i]<=pivot && i<=end){
			i++;
		}
		while(input[j]>pivot && j>=start){
			j--;
		}
		if(i<j){
			swap(input[i], input[j]);
		}		
	}
	swap(input[j], input[start]);
	return j; // returns pivot index
}

void quickSort(int input[], int start, int end) {
	if(start<end){
		int pindex = partitionArray(input, start, end);
		quickSort(input, start, pindex-1);
		quickSort(input, pindex+1,end);
	}


}
