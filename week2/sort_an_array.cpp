void sort012(int a[], int n)
{ int first=0, last=n-1, mid=0;
        
        while(mid<=last)
        {
            if(a[mid]==0)
            {
               int temp = a[first];
               a[first] = a[mid];
               a[mid] = temp;
                first++;
                mid++;
            }
            else
            {
                if(a[mid]==1)
                    mid++;
                
                else
                {
                    int tem = a[last];
                    a[last] = a[mid];
                    a[mid] = tem;
                    last--;
                }
            }
        }
    
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends