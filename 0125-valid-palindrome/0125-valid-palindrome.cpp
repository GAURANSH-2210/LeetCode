class Solution {
public:
    bool isAlphanumeric(char ch){
        return (ch>=97 && ch<=122) || (ch>=48 && ch<=57);
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int l = 0, r = n - 1;
        while(l<r){
            char cl = tolower(s[l]), cr = tolower(s[r]);
            if(!(isAlphanumeric(cl))){ // invalid left
                l++;
            }
            else if(!(isAlphanumeric(cr))){ // invalid right
                r--;
            }
            else{
                if(cl!=cr){ // invalid both
                    return false;
                }
                l++; // both valid so we move to next iteration
                r--;
            }
        }
        return true;
    }
};