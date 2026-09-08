class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hasnums = []
        for i in nums:
            if i in hasnums:
                return True
            else:
                hasnums.append(i)
        return False

        