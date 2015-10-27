s=str(input())
if "in" in s:
        i=8
        while s[i] != ' ':
            i=i+1
        a=(s[7:i])
        print(a)
        #a=int(a)
        b=(s[i+1:])
        print(b)
        #b=int(b)