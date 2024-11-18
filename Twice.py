t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(sum([a.count(x) // 2 for x in range(n + 1)]))