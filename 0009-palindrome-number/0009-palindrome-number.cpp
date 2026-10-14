class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers are never palindromes
        if (x < 0) return false;
        
        int length = to_string(x).length();

        vector<int> arr(length);

        int i = 0;
        while(i < length){
            arr[i] = x%10;
            x = x/10;

            i++;
        }  

        int start = 0;
        int end = length-1;

        for(int i=0; i<length/2; i++){
            if(arr[start] != arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};