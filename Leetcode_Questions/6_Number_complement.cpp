class Solution {
public:
    int findComplement(int num) {
        if(num==0){
            return 1;
        }
        int copy_of_num = num,mask=0;
        while(copy_of_num!=0){
            mask=(mask<<1)|1;
            copy_of_num = copy_of_num>>1;
        }
        int finalAns = ((~num) & mask);
        return finalAns;

    }
};