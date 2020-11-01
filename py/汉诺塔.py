def h(n,x,y,z):
    if n == 1:
        print(x,'-->',z)
    else:
        h(n-1,x,z,y)
        print(x,"-->",z)
        h(n-1,y,x,z)
n = int(input("请您输入汉诺塔的层数："))
h(n,'x','y','z')        
