def solution(arr):
    arr.sort()
    return arr


# Test
print(solution([1, -5, 2, 4, 3]))  # 반환값 : [-5, 1, 2, 3, 4]
print(solution([2, 1, 1, 3, 2, 5, 4]))  # 반환값 : [1, 1, 2, 2, 3, 4, 5]
print(solution([1, 6, 7]))  # 반환값 : [1, 6, 7]
