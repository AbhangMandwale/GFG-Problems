class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        sort(arr.begin(), arr.end());
        if (n%2==0){
            for (int i=0; i<n; i++){
                if (i%2==0){
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
        else{
            for (int i=0; i<n-1; i++){
                if (i%2==0){
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
        
    }
};
