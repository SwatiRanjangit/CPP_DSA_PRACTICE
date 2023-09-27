 string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    string ans;
    int carry=0;
    
    int i=n-1;
    int j=m-1;

    // case for when both array is of equal length
    while(i>=0 && j>=0){
        int sum = a[i] + b[j] + carry;
        int digit= sum % 10;
        
        ans.push_back(digit+ '0'); // it to convert integer to string representation while pushing in vector
        carry = sum / 10;
        i--;
        j--;
        
    }
    //case when array 1 length is greater
    while(i>=0){
        int sum = a[i] + 0 + carry;
        int digit= sum % 10;
       
        ans.push_back(digit + '0');
        carry = sum / 10;
        i--;
    
        
        
    }
    //case when array 2 length is greater
    while( j>=0){
        int sum = 0 + b[j] + carry;
        int digit= sum % 10;
       ans.push_back(digit+ '0');
        carry = sum / 10;
        
        j--;
        
    }
    
    if(carry){
        ans.push_back(carry+ '0');
    }
    
    while(ans[ans.size()-1]=='0'){
        ans.pop_back();
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
    }