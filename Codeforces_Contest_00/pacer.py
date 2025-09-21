#!/usr/bin/env python3

def solve_pacer(n: int, m: int, requirements: list) -> int:
    # requirements is a list of tuples (minute, required_side)
    # Sort requirements by minute
    requirements.sort()
    
    # Current position (0 or 1)
    current_side = 0
    points = 0
    last_req_minute = 0
    
    # Process each requirement
    for minute, required_side in requirements:
        # Calculate moves needed between last requirement and current one
        available_moves = minute - last_req_minute
        moves_needed = abs(current_side - required_side)
        
        if moves_needed > available_moves:
            # Impossible to meet requirement
            return -1
            
        # If we have extra moves, we can use them to gain points
        extra_moves = available_moves - moves_needed
        # We can make round trips with extra moves
        points += (extra_moves // 2) * 2
        # If we have one move left and we need to move to meet requirement
        if moves_needed > 0:
            points += 1
            
        current_side = required_side
        last_req_minute = minute
    
    # Add points for remaining moves after last requirement
    remaining_moves = m - last_req_minute
    points += (remaining_moves // 2) * 2
    
    return points




def main():
    # Read number of test cases
    t = int(input())
    
    for _ in range(t):
        # Read n (number of requirements) and m (total minutes)
        n, m = map(int, input().split())
        requirements = []
        
        # Read each requirement
        for _ in range(n):
            minute, side = map(int, input().split())
            requirements.append((minute, side))
            
        # Solve and print result
        result = solve_pacer(n, m, requirements)
        print(result)

if __name__ == '__main__':
    main()