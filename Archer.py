def probchecker(a, b, c, d):
    p1 = a / b
    p2 = c / d

    smallr_wins = p1 / (1 - (1 - p1) * (1 - p2))

    return smallr_wins

a, b, c, d = map(int, input().split())
res = probchecker(a, b, c, d)

print(f"{res:.12f}")
