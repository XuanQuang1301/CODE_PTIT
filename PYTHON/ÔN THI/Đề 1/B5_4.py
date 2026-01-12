def get_interest_rate(amount, months):
    # Xác định mức tiền gửi
    if amount < 1_000_000_000:
        tier = 0
    elif amount < 3_000_000_000:
        tier = 1
    else:
        tier = 2

    # Chọn mức lãi suất theo kỳ hạn
    if 1 <= months <= 2:
        rates = [2.5, 2.7, 2.8]
    elif 3 <= months <= 6:
        rates = [3.9, 4.1, 4.3]
    elif 7 <= months <= 12:
        rates = [4.8, 4.9, 5.0]
    elif 13 <= months <= 36:
        rates = [5.0, 4.8, 4.9]
    else:  # > 36 tháng
        rates = [5.1, 4.7, 5.0]

    return rates[tier]


def calc_interest():
    amount = int(input().strip())
    months = int(input().strip())

    rate = get_interest_rate(amount, months)
    interest = amount * (rate / 100) / 12 * months

    print(int(interest))


# Chạy chương trình
calc_interest()
