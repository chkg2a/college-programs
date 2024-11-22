#!/bin/python3

class Solution:
    def isValid(self,s):
        stk = []
        umap = {'}':'{',']':'[',')':'('}
        for char in s:
            if char in umap.values():
                stk.append(char)
            else:
        return not stk


if __name__ == "__main__":
    sol = Solution()
    s = "({[]})"
    print(sol.isValid(s))
