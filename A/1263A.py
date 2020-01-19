T = int(input())

while T:
    Rgb = list(map(int, input().split()))

    Total = Rgb[0] + Rgb[1] + Rgb[2]
    Max = max(Rgb)

    if Total - Max <= Max:
        Ans = Total - Max
    else:
        Ans = Total // 2

    print(Ans)

    T -= 1