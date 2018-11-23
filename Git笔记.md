# git笔记



>Git的官方网站：http://git-scm.com
>
>廖雪峰的官方网站：https://www.liaoxuefeng.com
>
>Git小抄：Git Cheat Sheet.pdf




### 1、建立Git
合适的文件夹创建空目录

```
$ mkdir document-name
$ cd learngit
$ pwd//显示当前目录
```
把这个目录变成Git可以管理的仓库
```
$ git init
Initialized empty Git repository in somewhere
```


### 2、添加文件到仓库

把文件添加到版本库，添加到暂存区里面去

~~~
$ git add readme.txt
~~~

添加文件夹下所有文件

~~~
$ git add .
~~~

用命令 git commit告诉Git，把文件提交到仓库，引号内为提交说明

```

//把文件提交到
$ git commit -m "wrote a readme file"
```
关联到远程库

~~~
git remote add origin 远程库地址
如：
git remote add origin https://github.com/cade8800/ionic-demo.git
~~~

获取远程库与本地同步合并（如果远程库不为空必须做这一步，否则后面的提交会失败）

~~~
git pull --rebase origin master
~~~

把本地库的内容推送到远程，使用 git push命令，实际上是把当前分支master推送到远程。执行此命令后会要求输入用户名、密码，验证通过后即开始上传。

~~~
git push -u origin master
~~~

查看工作区的状态

```
$ git status
//View the changes or difference
$ git diff
```


### 3、版本回退

`HEAD`指向的版本就是当前版本
Git允许我们在版本的历史之间穿梭，使用命令
```
git reset --hard commit_id
```
穿梭前，用`git log`可以查看提交历史，以便确定要回退到哪个版本
如果嫌输出信息太多，看得眼花缭乱的，可以试试加上`--pretty=oneline`参数
要重返未来，用`git reflog`查看命令历史，以便确定要回到未来的哪个版本



###4、远程提交
要关联一个远程库，使用命令
```
git remote add origin git@server-name:path/repo-name.git
```
关联后，使用命令`git push -u origin master`第一次推送master分支的所有内容；

把本地库的所有内容推送到远程库
```
//把本地master分支的最新修改推送至GitHub
$ git push origin master
```



### 5、从远程库克隆

~~~
$ git clone 远程库地址
~~~



### 6、创建与合并分支
Git鼓励大量使用分支：

查看分支：git branch

创建分支：git branch <name>

切换分支：git checkout <name>

创建+切换分支：git checkout -b <name>

合并某分支到当前分支：git merge <name>

删除分支：git branch -d <name>
