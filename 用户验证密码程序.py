time = 3
secret = "kaiyue"
while time:
    temp = input("请您输入您的密码")
    if temp == secret :
        print("密码回答正确")
        break
    elif temp != secret:
        print("密码回答错误")
        time = time - 1
