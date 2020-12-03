print('-----------------kaiyue---------------------')
temp = input("不妨猜一下kaiyue心里想的那个数字：")
guess = int(temp)
while guess !=8:
    temp = input("不妨猜一下kaiyue心里想的那个数字：")
    guess = int(temp)
    if guess == 8:
        print("卧槽，你是kaiyue心中的蛔虫吗？！")
        print("哼，猜中了也没有奖励!")
    else:
        if guess >8:
            print("哥，大了大了")
        else:
            print("哈哈哈，小了笑了")    
print("游戏结束，不玩啦！")    

