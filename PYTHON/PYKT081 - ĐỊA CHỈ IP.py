for case in range(int(input())):
    s = input().strip()
    arr = s.split('.')

    ok = True

    # phải có đúng 4 phần
    if len(arr) != 4:
        ok = False
    else:
        for part in arr:
            if part == "":
                ok = False
                break
            if not part.isdigit():
                ok = False
                break
            num = int(part)
            if num < 0 or num > 255:
                ok = False
                break

    print("YES" if ok else "NO")
