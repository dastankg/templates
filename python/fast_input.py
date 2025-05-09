from sys import stdin


def read_string() -> str:
    return stdin.readline().strip()


def read_strings() -> list[str]:
    return stdin.readline().split()


def read_integer() -> int:
    return int(stdin.readline())


def read_integers() -> list[int]:
    return list(map(int, stdin.readline().split()))

