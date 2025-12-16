try:
    score = int(input("score:"))
    if 90 <= score <= 100:
        grade = "优"
        print("grade:",grade)
    elif 80 <= score < 90:
        grade = "良"
        print("grade:",grade)
    elif 70 <= score < 80:
        grade = "中"
        print("grade:",grade)
    elif 60 <= score < 70:
        grade = "及格"
        print("grade:",grade)
    elif 0 <= score < 60:
        grade = "你不及格！请注意补考通知！"
        print("grade:",grade)
    else:
        grade = "输入有误！"
        print("输入有误！")
except ValueError:
    grade = "输入有误！"
    print("输入有误！")
