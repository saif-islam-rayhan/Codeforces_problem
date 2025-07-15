t = int(input().strip())
for _ in range(t):
    s = input().strip()
    # must start with "10" and have at least one more digit
    if s.startswith("10") and len(s) > 2:
        exp = s[2:]
        # exponent must not start with '0' and must be >= 2
        if exp[0] != '0' and int(exp) >= 2:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
