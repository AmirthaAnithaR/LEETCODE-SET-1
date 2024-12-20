int mySqrt(int x) {
    int low=1,high=x,ans=1;int mid;
    while(low<=high){
        mid=low+high/2;
        if(mid*mid<=x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
