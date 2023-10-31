 // TC: O(n log n)
 // GAP METHOD
 
 void merge(vector<int>& nums,int start,int mid,int end){
   int total_length = end-start+1;
   int gap = total_length / 2 + total_length % 2; // ceil

   while(gap > 0){
     int i=start , j = start+ gap;

     while(j<=end){
         if(nums[i] > nums[j]){
             swap(nums[i],nums[j]);
         }
         i++;
         j++;
     }

     gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);

}

  }

   void mergeSort(vector<int>& nums,int start,int end){
       if(start>=end) return;

       int mid = (start+end) >> 1;
       
       mergeSort(nums,start,mid);
       mergeSort(nums,mid+1, end);

       merge(nums,start,mid,end);

       
   }

    vector<int> sortArray(vector<int>& nums) {
      
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }