t=int(input())
while t:
    s=input()
    total=0
    for i in range(len(s)):
        ch=s[i].upper()
        if ch in "AEIOU":
            total+=(len(s)-i)*(i+1)
    print(total)
    t-=1
