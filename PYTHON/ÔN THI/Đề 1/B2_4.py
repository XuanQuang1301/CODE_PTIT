def solve():
    try:
        # Đọc số lượng bộ test
        t = int(input())
    except:
        return

    for _ in range(t):
        try:
            s = input()
        except:
            break

        # Bước 1: Đếm tần suất xuất hiện của mỗi ký tự
        counts = {}
        for char in s:
            if char in counts:
                counts[char] += 1
            else:
                counts[char] = 1

        max_freq = 0
        result_char = ''

        # Bước 2: Tìm ký tự có tần suất lớn nhất
        # Duyệt theo thứ tự xuất hiện trong chuỗi gốc để thỏa mãn điều kiện:
        # "Nếu số lần xuất hiện bằng nhau thì in ra ký tự xuất hiện trước"
        for char in s:
            if counts[char] > max_freq:
                max_freq = counts[char]
                result_char = char

        print(result_char)


if __name__ == "__main__":
    solve()