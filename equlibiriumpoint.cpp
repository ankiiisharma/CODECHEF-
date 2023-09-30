class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n == 1)
            return 1;
        
        long long sum = 0;
        for(int i=0 ; i<n ; ++i)
            sum += a[i];
        long long leftSum = 0;
        for(int i=0 ; i<n ; ++i){
            sum -= a[i];
            if(leftSum == sum)
                return i+1;
            leftSum += a[i];
        }
        return -1;
    }

};

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution ob;
    cout<<ob.
    
    return 0;
}