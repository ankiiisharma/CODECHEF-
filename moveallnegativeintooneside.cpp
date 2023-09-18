class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                a.push_back(arr[i]);
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                a.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
    }
};