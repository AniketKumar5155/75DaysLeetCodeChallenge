class Solution {
    public boolean isPalindrome(int x) {
        int num = x, newNum = 0;
        if(x < 0) return false;
        while(num > 0){
            int currentDigit = num % 10;
            System.out.println("Current: " + currentDigit);
            newNum = newNum * 10 + currentDigit;
            System.out.println("newNum: " + newNum);
            num/=10;
        }
        return newNum == x;
    }
}