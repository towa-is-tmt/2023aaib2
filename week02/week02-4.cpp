class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length(); //c++的字串的長度
        int one  = 0 ; // s裡面 有幾個1 等等慢慢數出來
        for(int i=0; i<N; i++){ //c/c++迴圈(有圓括號)
            if(s[i] == '1') one += 1; //if(判斷) 也有圓括號

        }
        //printf("N:%d one:%d " , N, one); // 先印出來 有幾個1
        string ans; // 用來放答案
        for(int i=0; i<one-1; i++ ) ans += '1';//有幾個1要放前面?
        for(int i=0; i<N-one; i++)ans +='0'; //有幾個0要放中間?
        ans += '1'; //最後塞一個1
        return ans;
    }
