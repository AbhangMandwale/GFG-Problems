class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        /*for (int i=0; i<r+1; i++){ 
            for (int j=i+1; j<r+1; j++){
                if (arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } //This function works but takes up more time than required
        }*/
        sort(arr,arr+(r+1));
        
        int sum = arr[k-1];
        return sum;
    }
};
