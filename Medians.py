import sys

input = sys.stdin.readline


class Solution:
    hasMultipleTests = True

    n: int = None
    k: int = None

    @classmethod
    def preprocess(cls):
        pass

    @classmethod
    def input(cls, testcase):
        cls.n, cls.k = map(int, input().split())

    @classmethod
    def solve(cls, testcase):
        if cls.n == 1: return (print('1\n1'))

        if cls.k in {1, cls.n}: return (print(-1))

        p2, p3 = cls.k - cls.k % 2, cls.k + 1 + cls.k % 2
        print(f'3\n1 {p2} {p3}')


if __name__ == '__main__':
    Solution.preprocess()

    t = int(input()) if Solution.hasMultipleTests else 1
    for testcase in range(1, t + 1):
        Solution.input(testcase)
        Solution.solve(testcase)