class Solution:
    def hammingWeight(self, n: int) -> int:
        count = 0
        for i in bin(n)[2:]:
            if i == '1':
                count += 1
        return count 



s = Solution()
print('input for 11 =>', s.hammingWeight(11))
print('input for 128 =>', s.hammingWeight(128))
print('input for 2147483645 =>', s.hammingWeight(2147483645))