def is_zigzag(prev, current, nxt):

    return ((prev < current and nxt < current) or
            (prev > current and nxt > current))


def zigzag(test_array):

    max_zigzag_length = 0
    current_zigzag_length = 0

    for i in range(1, len(test_array) - 1):
        if is_zigzag(test_array[i - 1], test_array[i], test_array[i + 1]):
            current_zigzag_length += 1
            max_zigzag_length = max(current_zigzag_length, max_zigzag_length)
        else:
            current_zigzag_length = 0

    return max_zigzag_length + 2 if max_zigzag_length > 0 else 1


if __name__ == "__main__":
    N = int(input().strip())
    arr = list(map(int, input().strip().split()))
    print(zigzag(arr))