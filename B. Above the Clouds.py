t = int(input())
for _ in range(t):
    n = int(input())
    s = input().rstrip('\n')
    # Count frequencies
    freq = {}
    for ch in s:
        freq[ch] = freq.get(ch, 0) + 1

    ok = False
    # Check positions 1 through n-2
    for i in range(1, n-1):
        if freq[s[i]] >= 2:
            ok = True
            break

    print("Yes" if ok else "No")
