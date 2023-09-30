
class Solution 
{
    public:
    
    bool isPossibleSol(int A[],int N,int M, int mid){
        int studentCount=1;
        int pageSum =0;
        
        for(int i=0;i<N;i++){
            if(A[i]>mid){
                return false;
            }
            if(pageSum+A[i] > mid){
                studentCount++;
                pageSum= A[i];
                if(studentCount > M){
                    return false;
                }
            }else{
                pageSum += A[i];
            }
        }
        return true;
    }
    
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        
        int start =0;
        int end = accumulate(A,A+N,0);
        int ans =-1;
        
        while(start<=end){
            int mid= start+(end-start)/2;
            if(isPossibleSol(A,N,M,mid)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid +1;
            }
        }
        return ans;
    }
};