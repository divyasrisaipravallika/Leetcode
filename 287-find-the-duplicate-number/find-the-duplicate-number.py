class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        # p = 0
        # k = len(nums)-1
        # while p<=k:
        #     if nums[p]==nums[k]:
        #         # print(nums[p],nums[k],",")
        #         return nums[p]
        #     i = p+1
        #     j = k-1
        #     while i<=j:
        #         if nums[p]==nums[i] or nums[p]==nums[j]:
        #             # print(nums[p],nums[i],nums[j],"=")
        #             return nums[p]
        #         if nums[k]==nums[i] or nums[k]==nums[j]:
        #             # print(nums[k],nums[i],nums[j],"l")
        #             return nums[k]
        #         i+=1
        #         j-=1
        #     p+=1
        #     k-=1
        # return 0
        nums.sort()
        for i in range(len(nums)-1):
            if nums[i]==nums[i+1]:
                return nums[i]
            