input_str = input("请输入一个列表的组成元素:")
input_list = eval(input_str)
a = int(input("请输入较小的起始值a:"))
b = int(input("请输入较大的起始值b:"))

sub_list = input_list[a:b]
print("子列表为:",sub_list)