class Solution {
public:
int find(int n,int k){
    if(n==1&k==1){
        return 0;
    }
    int mid=(pow(2,n-1)/2);
     if(k<=mid){
        return find(n-1,k);
    }
    else{
        return !find(n-1,k-mid);
    }

}
    int kthGrammar(int n, int k) {
        int l=find(n,k);
        return l;
    }
};