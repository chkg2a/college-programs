class Solution:
    def twoSum(self,nums, target):
        umap = {}
        n = len(nums)
        for i in range(n):
            complement = target - nums[i]
            if umap.get(complement):
                return [umap[complement],i]
            umap[nums[i]] = i
        return []

if __name__ == "__main__":
    sol = Solution()
    nums = [2,7,9,13]
    target = 9
    print(sol.twoSum(nums,target))
