import itertools
import math


def solve():
    n = int(input())
    nums = list(range(1, n + 1))
    perm = list(itertools.permutations(nums))
    temp = 0
    ans = []
    ds = set()
    for i in range(1, n):
        for j in perm:
            g = math.gcd(j[i], j[i - 1])
            ds.add(g)
            if len(ds) > temp:
                ans = j
    print(ans)

    # for i in perm:
    #     print(i)


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        solve()
