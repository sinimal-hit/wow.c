def f(n):
    result = '0'
    if n == 0:
        return result
    else:
        result = f(n//2)
        return result + str(n%2)
temp = int(input('请您输入一个正整数：'))
print(f(temp))

        
