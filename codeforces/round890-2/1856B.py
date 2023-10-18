def solve():
    n = int(input())

    count = {}
    a = list(map(int, input().split()))
    sum_a = sum(a)
    most = 0
    if n == 1:
        print("NO")
        return

    for num in a:
        count[num] = count.get(num, 0) + 1
        most = max(most, count[num])

    low = 1
    up = sum_a - n + 1
    length = up - low + 1

    if most + (n + 1) // length > n:
        print("NO")
    else:
        print("YES")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
