import sys
input = sys.stdin.readline

N = int(input())
A = [int(input()) for _ in range(N)]

stack = []
ans = 0

for x in A:
    # Pop phần tử nhỏ hơn
    while stack and stack[-1][0] < x:
        ans += stack[-1][1]
        stack.pop()

    if stack and stack[-1][0] == x:
        # phần tử bằng nhau
        count = stack[-1][1]
        ans += count
        stack[-1][1] += 1   # tăng nhóm same-value

        # Nếu còn phần tử phía trước nữa → vẫn nhìn thấy
        if len(stack) > 1:
            ans += 1

    else:
        # Nếu đỉnh còn tồn tại → tạo 1 cặp với x
        if stack:
            ans += 1
        stack.append([x, 1])

print(ans)
