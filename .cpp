class Solution {
public:
    int arraySign(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                a++;
            }
            else if(nums[i]==0){
                b++;
            }
            else{
                c++;
            }
        }
        cout<<a<<" "<<c<<endl;
        if(b){
            return 0;
        }
        else if(a%2==0){
            return 1;
        }
        
        return -1;
        
    }
};
