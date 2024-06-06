class Solution {
public:
    long int reverse(long int x) {
        long int temp=x;
        x=abs(x);
        string s=to_string(x);
        int n=s.length();
        long int z=pow(10,n-1);
        long int a=0;
        for(int i=0;i<n;i++){
            a=a+(x%10)*z;
            z=z/10;
            x=x/10;
        }
        if(a>(pow(2,31)-1) || a<-1*pow(2,31)){
            return 0;
        }
        else{
            if(temp<0){
                return -1*a;
            }    
            else{
                return a;
            }
        }
    }
};