class Computation:
    # 1. Hàm tạo (Constructor)
    def __init__(self, n):
        self.n = n

    # 2. Phương thức tính giai thừa
    def Factorial(self):
        result = 1
        for i in range(1, self.n + 1):
            result *= i
        return result

    # 3. Phương thức kiểm tra số nguyên tố
    def Prime(self):
        if self.n < 2:
            print("NO")
            return

        # Kiểm tra từ 2 đến căn bậc 2 của n
        is_prime = True
        for i in range(2, int(self.n ** 0.5) + 1):
            if self.n % i == 0:
                is_prime = False
                break

        if is_prime:
            print("YES")
        else:
            print("NO")

    # 4. Phương thức liệt kê ước số
    def listDiv(self):
        divisors = []
        for i in range(1, self.n + 1):
            if self.n % i == 0:
                divisors.append(str(i))
        print(",".join(divisors))


# --- Chương trình chính (Main) ---
try:
    # Nhập dữ liệu
    n = int(input())

    # Khởi tạo đối tượng
    obj = Computation(n)

    # Gọi các phương thức theo đúng thứ tự yêu cầu
    print(obj.Factorial())  # In kết quả giai thừa trả về
    obj.Prime()  # Hàm này tự in YES/NO
    obj.listDiv()  # Hàm này tự in danh sách ước

except ValueError:
    pass