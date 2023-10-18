from typing import *


class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        s = " " + s
        dp = [False] * (len(s) + 1)
        dp[0] = True
        for i in range(1, len(s) + 1):
            for j in range(1, i + 1):
                if dp[i]:
                    break
                if s[j : i + 1] in wordDict:
                    dp[i] = dp[j - 1]
        return dp[-1]
