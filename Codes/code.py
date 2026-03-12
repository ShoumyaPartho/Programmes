# Solved by: SHOUMYA

import sys


LOCAL = False


def solve(tc: int) -> None:
    print("Hare Krishna")
    print(tc)


def main() -> None:
    if LOCAL:
        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")

    input = sys.stdin.readline

    t = int(input().strip())
    for tc in range(1, t + 1):
        # print(f"Case #{tc}:", end=" ")
        solve(tc)


if __name__ == "__main__":
    main()