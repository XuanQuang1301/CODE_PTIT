import sys

# Tăng giới hạn đệ quy để an toàn (dù bài này độ sâu chỉ max 15)
sys.setrecursionlimit(2000)


def solve():
    # Danh sách tất cả các số nguyên tố <= 50
    primes_all = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]

    # Hàm tính: Có bao nhiêu số trong [1, limit] KHÔNG chia hết cho tập primes
    def get_count(limit, primes):
        if limit == 0: return 0

        n_primes = len(primes)
        ans = 0

        # Đệ quy Bao hàm - Loại trừ
        # index: vị trí số nguyên tố đang xét trong mảng primes
        # current_lcm: tích các số nguyên tố đã chọn
        # count_chosen: số lượng số đã chọn (để quyết định dấu + hay -)
        def backtrack(index, current_lcm, count_chosen):
            nonlocal ans

            # Số lượng bội số của current_lcm trong đoạn [1, limit]
            term = limit // current_lcm

            if term == 0:
                return  # Cắt nhánh: Nếu tích đã lớn hơn limit thì dừng

            # Nếu chọn số lượng lẻ (1, 3, 5...) số nguyên tố -> Dấu TRỪ
            # Nếu chọn số lượng chẵn (0, 2, 4...) số nguyên tố -> Dấu CỘNG
            if count_chosen % 2 == 1:
                ans -= term
            else:
                ans += term

            # Tiếp tục xét các số nguyên tố tiếp theo
            for i in range(index, n_primes):
                p = primes[i]

                # Kiểm tra trần để tránh nhân quá lớn (Overflow hoặc vượt limit)
                # current_lcm * p > limit <=> p > limit // current_lcm
                if p > limit // current_lcm:
                    break

                backtrack(i + 1, current_lcm * p, count_chosen + 1)

        # Bắt đầu đệ quy: chưa chọn số nào (lcm=1, count=0 -> Dấu + cho tổng số phần tử)
        backtrack(0, 1, 0)
        return ans

    # --- Xử lý Input ---
    # Đọc toàn bộ input một lần để nhanh hơn
    input_data = sys.stdin.read().split()

    if not input_data:
        return

    iterator = iter(input_data)

    try:
        while True:
            val = next(iterator)
            if val == '-1':  # Điều kiện dừng
                break

            l = int(val)
            r = int(next(iterator))
            n = int(next(iterator))

            # Lọc ra các số nguyên tố <= N cho test case này
            current_primes = [p for p in primes_all if p <= n]

            # Kết quả = Count(R) - Count(L-1)
            result = get_count(r, current_primes) - get_count(l - 1, current_primes)
            print(result)

    except StopIteration:
        pass


if __name__ == '__main__':
    solve()