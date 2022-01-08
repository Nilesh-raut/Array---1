int rakshaBandhan(vector < int > arr, int n) {   
int sum = 0;
int count = 0;
int post_count = 0;
for(int i = 0;i<n; i++){
    sum = sum +arr[i];
    
    if(arr[i]>=0){
        post_count++;
    }
    
    if(arr[i] > -10000){
        count++;
    }
    
}
    
    if(sum==0){
        return post_count;
    }
    if(sum<0){
        return 0;
    }
    if(sum>0){
        return count;
    }
}