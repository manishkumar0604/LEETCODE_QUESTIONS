class Solution {
public:
    int reverse(int x) {
        long int rev {0} , rem ;
        while(x != 0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10; 
            if (rev > INT_MAX  || rev < INT_MIN) 
             return 0;
        }
        return rev;
    }
};