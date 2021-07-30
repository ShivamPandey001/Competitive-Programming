//Generating all sub arrays
for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of current subarray (i,j)
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
        cout<<endl;
        }
 }
