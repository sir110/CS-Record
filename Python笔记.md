

> 练习平台：https://python123.io



## 数据类型

### Numbers（数字）

Python支持四种不同的数字类型：

| 类型    |                                    |
| ------- | ---------------------------------- |
| int     | 有符号整型                         |
| long    | 长整型[也可以代表八进制和十六进制] |
| float   | 浮点型                             |
| complex | 复数                               |

### String（字符串）

python的字串列表有2种取值顺序:
从左到右索引默认0开始的，最大范围是字符串长度少1
从右到左索引默认-1开始的，最大范围是字符串开头

### List（列表）

### Tuple（元组）

### Dictionary（字典）

## 保留字

| 保留字   | 说明                                                         |
| -------- | ------------------------------------------------------------ |
| and      | 用于表达式运算，逻辑与操作                                   |
| as       | 用于类型转换                                                 |
| assert   | 断言，用于判断变量或条件表达式的值是否为真                   |
| break    | 中断循环语句的执行                                           |
| class    | 用于定义类                                                   |
| continue | 继续执行下一次循环                                           |
| def      | 用于定义函数或方法                                           |
| del      | 删除变量或者序列的值                                         |
| elif     | 条件语句，与if、else 结合使用                                |
| else     | 条件语句，与if、elif结合使用。也可以用于异常和循环语句       |
| except   | except包含捕获异常后的操作代码块，与try、finally结合使用     |
| exec     | 用于执行python 语句                                          |
| for      | for循环语句                                                  |
| finally  | 用于异常语句，出现异常后，始终要执行finally，包含的代码块，与try、except结合使用 |
| from     | 用于导入模块，与import结合使用                               |
| global   | 定义全局变量                                                 |
| if       | 条件语句，与else、elif结合使用                               |
| import   | 用于导入模块，与from结合使用                                 |
| in       | 判断变量是否在序列中                                         |
| is       | 判断变量是否为某个类的实例                                   |
| lambda   | 定义匿名变量                                                 |
| not      | 用于表达式运算，逻辑非操作                                   |
| or       | 用于表达式运算，逻辑或操作                                   |
| pass     | 空的类，方法，函数的占位符                                   |
| print    | 打印语句                                                     |
| raise    | 异常抛出操作                                                 |
| return   | 用于从函数返回计算结果                                       |
| try      | try包含可能会出现异常的语句，与except，finally结合使用       |
| while    | while的循环语句                                              |
| with     | 简化python的语句                                             |
| yield    | 用于从函数依此返回值                                         |
| nonlocal |                                                              |
| False    |                                                              |



## 实例

### 温度转换

```python
#TempConvert.py
TempStr = input()
if TempStr[-1] in ['f','F']:
    C = (eval(TempStr[0:-1])-32) / 1.8
    print("{:.2f}C".format(C))
elif TempStr[-1] in ['c','C']:
    F = 1.8*eval(TempStr[0:-1])+32
    print("{:.2f}F".format(F))
else:
    print("输入格式错误")
```

## 基本图形绘制

**实例：绘制蟒蛇** 

```python
#PythonDraw.py
import turtle # 引入turtle绘图库
turtle.setup(650, 350, 200, 200)
turtle.penup()
turtle.fd(-250)
turtle.pendown()
turtle.pensize(25)
turtle.pencolor("purple")
turtle.seth(-40)
for i in range(4):
	turtle.circle(40, 80)
	turtle.circle(-40, 80)
turtle.circle(40, 80/2)
turtle.fd(40)
turtle.circle(16, 180)
turtle.fd(40 * 2/3)
turtle.done()
```

