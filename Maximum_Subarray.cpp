#include<iostream>
using namespace std;
int maxSubArray(int nums[],int size) {
    int sum=0,maxm=nums[0];
    for(int j=0;j<size;j++){
            sum+=nums[j];
            maxm=max(maxm,sum);
            if(sum<0)
                sum=0;

        
    }
        return maxm;
}
int main(){
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=9;
    cout<<maxSubArray(nums,size);
}