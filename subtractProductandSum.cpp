class Solution {
public:

    int productOfDigits(int n){
        int val = 1;
        while(n != 0){
            val *= (n % 10);
            n /= 10; 
        }
        return val;
    }

    int sumOfDigits(int n){
        int val = 0;
        while(n != 0){
            val += n % 10;
            n /= 10; 
        }
        return val;
    }

    int subtractProductAndSum(int n) {
        int prod = productOfDigits(n);
        int sum = sumOfDigits(n);
        return (prod-sum);
    }
};

int main(){
    Solution s;
    cout << s.subtractProductAndSum(234) << endl;    
    return 0;
}
