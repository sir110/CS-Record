### Python enumerate() 函数

##### 描述

enumerate() 函数用于将一个可遍历的数据对象(如列表、元组或字符串)组合为一个索引序列，同时列出数据和数据下标，一般用在 for 循环当中。 

~~~python
# 语法
enumerate(sequence, [start=0])

# 参数
sequence -- 一个序列、迭代器或其他支持迭代对象。
start -- 下标起始位置。

# 返回值
返回 enumerate(枚举) 对象。

# 实例
>>>seasons = ['Spring', 'Summer', 'Fall', 'Winter']
>>> list(enumerate(seasons))
[(0, 'Spring'), (1, 'Summer'), (2, 'Fall'), (3, 'Winter')]
>>> list(enumerate(seasons, start=1))       # 小标从 1 开始
[(1, 'Spring'), (2, 'Summer'), (3, 'Fall'), (4, 'Winter')]

# for循环使用enumerate
>>>seq = ['one', 'two', 'three']
>>> for i, element in enumerate(seq):
...     print(i, element)
... 
0 one
1 two
2 three
~~~

