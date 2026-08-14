class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        l = len(nums)
        s = set()
        for i in range(l):
            if nums[i] in s:
                return True
            else: 
                s.add(nums[i])
        return False