# existing content
#!/usr/bin/env python3
import sys
 
def main():
    k = int(input())
 
    for _ in range(k):
        n, m, x, y = map(int, input().split())
        laser_x = []
        laser_y = []
        if n > 0:
            laser_x = list(map(int, input().split()))
        if m > 0:
            laser_y = list(map(int, input().split()))
        result = n+m
        print(result)
 
 
 
if __name__ == '__main__':
	main()