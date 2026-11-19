class Solution {
    /**
     * @param {string} s
     * @return {boolean}
     */
    isPalindrome(s) {
        let str="";
        for(let i = 0; i < s.length; i++){
            if(s[i] == ' ' || s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '*'|| s[i] == '&' || s[i] == '?'||s[i] == ',' ||s[i] == '.' ||s[i] == "'" || s[i] == ':' ||s[i] == ":"||s[i] == "!") continue;
            else str+=s[i];
        }

        str = str.toLowerCase();
        let i = 0, j = str.length-1;
        while(i <= j){
            if(str[i] != str[j]){
                return false;
            }
            i++,j--;
        }
        return true;
    }
}
