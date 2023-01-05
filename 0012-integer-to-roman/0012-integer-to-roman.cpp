class Solution {
public:
    string intToRoman(int num) {
        
        string ans = "";
        
        while (num >= 1000){
            
            ans.push_back('M');
            num -= 1000;
            
        }
        
        if (num >= 900){
            ans.append("CM");
            num -= 900;
        }
        
        while (num >= 500){
            
            ans.push_back('D');
            num -= 500;
            
        }
        
        if (num >= 400){
            ans.append("CD");
            num -= 400;
        }
        
        while (num >= 100){
            
            ans.push_back('C');
            num -= 100;
            
        }
        
        if (num >= 90){
            ans.append("XC");
            num -= 90;
        }
        
        while (num >= 50){
            
            ans.push_back('L');
            num -= 50;
            
        }
        
        if (num >= 40){
            ans.append("XL");
            num -= 40;
        }
        
        while (num >= 10){
            
            ans.push_back('X');
            num -= 10;
            
        }
        
        if (num >= 9){
            ans.append("IX");
            num -= 9;
        }
        
        while (num >= 5){
            
            ans.push_back('V');
            num -= 5;
            
        }
        
        if (num >= 4){
            ans.append("IV");
            num -= 4;
        }
        
        while (num >= 1){
            
            ans.push_back('I');
            num -= 1;
            
        }
        
        return ans;
        
    }
};