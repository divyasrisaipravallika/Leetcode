class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        dic = {0:0}
        s = 0
        rem = 0 
        m = 0
        x = False
        for i in range(len(nums)):
            s+=nums[i]
            rem = s%k
            if rem==0:
                m = i+1
            if rem in dic:
                m = max(m,i-dic[rem])
                if m >= 2:
                    x = True
            else:
                dic[rem] = i
        if x==True and m>=2: return True
        else: return False            
        