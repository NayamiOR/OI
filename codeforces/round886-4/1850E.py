def solve():
    n, c = map(int, input().split())  # 读取 n 和 c
    lengths = list(map(int, input().split()))  # 读取长度数组
    total_area = 0
    total_length = sum(lengths)
    for length in lengths:
        total_area += length * length

    a = -1
    b = 500000000
    while a + 1 < b:
        mid = (a + b) // 2
        result = 4 * n * mid * mid + 4 * mid * total_length + total_area
        if c == result:
            print(mid)
            return
        elif c < result:
            b = mid
        else:
            a = mid


if __name__ == "__main__":
    times = int(input())
    for t in range(times):
        solve()
