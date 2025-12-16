id_card = input()  # 获取用户输入的身份证号码

year = id_card[6:10]  # 提取年份
month = id_card[10:12]  # 提取月份
day = id_card[12:14]  # 提取日期

print(f"{year}年{month}月{day}日")  # 输出出生年月日