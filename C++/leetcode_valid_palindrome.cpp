

// class Solution {
// public:
//     bool isPalindrome(string s) {
//        int start=0;
//        int end=s.size()-1;
//        while(start<=end){
//            if(!isalnum(s[start])){start++; continue;}
//            if(!isalnum(s[end])){end--;continue;}
//            if(tolower(s[start])!=tolower(s[end]))return false;
//            else{
//                start++;
//                end--;
//            }
//        }
//        return true;
// }
// };
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end) {
            if (!isAlphaNumeric(s[start])) { 
                start++;
                continue;
            }
            if (!isAlphaNumeric(s[end])) { 
                end--;
                continue;
            }
            if (toLowerCase(s[start]) != toLowerCase(s[end])) { 
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }

private:
    bool isAlphaNumeric(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }

    char toLowerCase(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c - 'A' + 'a'; 
        }
        return c;
    }
};
