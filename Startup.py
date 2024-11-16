def solve():
    n, k = map(int, input().split())
    brand_cost = [0] * k
    for _ in range(k):
        b, c = map(int, input().split())
        brand_cost[b - 1] += c
    brand_cost.sort(reverse=True)
    print(sum(brand_cost[:min(n, k)]))

t = int(input())
for _ in range(t):
    solve()
