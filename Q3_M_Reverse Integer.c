int reverse(int x){
    int LastDigit;
    int ans = 0;
    while(x!=0){
        LastDigit = x%10;
        if(ans<INT_MIN/10 || ans>INT_MAX/10) return 0;
        ans = (ans*10) + LastDigit;
        x = x/10;
        
        
    }
    x++;
    return ans;
    
    
}
