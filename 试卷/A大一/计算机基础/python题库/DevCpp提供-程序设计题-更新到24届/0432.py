shopping_amount = float(input())

if shopping_amount >= 300:
  print("获得50元代金券")
elif 200 <= shopping_amount <= 299:
  print("获得20元代金券")
elif 100 <= shopping_amount <= 199:
  print("获得10元代金券")
elif 1 <= shopping_amount <= 99:
  print("无代金券")
else:
  print("请输入有效的购物金额。")