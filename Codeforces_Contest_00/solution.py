# existing content
#!/usr/bin/env python3
import sys

def sum(a: int,b:int)->int:
    if(b%2==0):
        return 0
    else:
        return a


def main():
    n = int(input())
    pairs = []
    for _ in range(n):
        a, b = map(int, input().split())
        pairs.append((a, b))

    for a, b in pairs:
        k = sum(a, b)
        print(k)



if __name__ == '__main__':
	main()
