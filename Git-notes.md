# git笔记

Git的官方网站：http://git-scm.com
廖雪峰的官方网站：https://www.liaoxuefeng.com
Git小抄：Git Cheat Sheet.pdf


### 建立git
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
### 添加文件到仓库
```
//把文件添加到仓库
$ git add readme.txt
//把文件提交到仓库
$ git commit -m "wrote a readme file"
```
```
//查看工作区的状态
$ git status
//View the changes or difference
$ git diff
```
### 版本回退
`HEAD`指向的版本就是当前版本
Git允许我们在版本的历史之间穿梭，使用命令
```
git reset --hard commit_id
```
穿梭前，用`git log`可以查看提交历史，以便确定要回退到哪个版本
如果嫌输出信息太多，看得眼花缭乱的，可以试试加上`--pretty=oneline`参数
要重返未来，用`git reflog`查看命令历史，以便确定要回到未来的哪个版本

###远程提交
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

### 从远程库克隆

### 创建与合并分支
Git鼓励大量使用分支：

查看分支：git branch

创建分支：git branch <name>

切换分支：git checkout <name>

创建+切换分支：git checkout -b <name>

合并某分支到当前分支：git merge <name>

删除分支：git branch -d <name>
