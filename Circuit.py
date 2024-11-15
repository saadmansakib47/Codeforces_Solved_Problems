def solve():
    n = int(input())
    a = list(map(int, input().split()))

    cnt1 = sum(a)

    min_lights_on = cnt1 % 2
    max_lights_on = min(cnt1, n * 2 - cnt1)

    print(min_lights_on, max_lights_on)

t = int(input())
for _ in range(t):
    solve()
