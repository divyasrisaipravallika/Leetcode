class Solution:
    def minBitFlips(self, s: int, g: int) -> int:
        c = 0
        b = s^g
        while b!=0:
            if b&1==1:
                c+=1
            b=b>>1
        return c