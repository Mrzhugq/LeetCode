//1. 
uint32_t reverseBits(uint32_t n) 
{
    uint32_t ret=0;
    for(int i=0;i<32 && n>0;i++)
    {
        ret |= (n&1) << (31-i);
        n=n>>1;
    }
    return ret;
}
//  (n&1)    是取n的每个比特位
//  (31-i)   是把取得每个比特位移动到前面
//   |=      相当于加起来
//  n=n>>1   每取一位就让n向右以一个比特位，相当于n的比特位少一位，直到n到0
