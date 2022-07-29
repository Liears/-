class Solution {
public:
    string replaceSpace(string s) {
        int len = s.length();
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                count++;
            }
        }
        s.resize(len+2*count);
        for (int i = len-1;j = s.length() - 1;i<j;i--;j--){
            if(s[i] != ' ') {
                s[j] = s[i];
            } else{
                s[j - 2] = '%';
                s[j - 1] = '2';
                s[j] = '0';
                j -= 2;
            }
            /* code */
        }
        return s;
        

    }
};