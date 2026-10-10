### 学习
一、软件安装

apt（deb包）

sudo apt update       更新软件源索引（刷新软件清单）

sudo apt install xxx   安装软件

sudo apt remove xxx    卸载软件

sudo apt upgrade       升级所有已安装软件

sudo apt autoremove    清理无用依赖，释放磁盘



snap（独立包） 

sudo snap install xxx   安装snap软件

snap list              列出已安装snap程序

snap refresh           更新snap应用

snap remove xxx        删除snap软件

 



二、文件管理 

ls  列出目录内容  

-l  详细信息

-a 显示隐藏文件

 

touch  新建空文件  



 cp  复制文件/文件夹

 -r 递归



mv  移动 / 重命名 

mv old.txt new.txt 重命名

mv file ~/Documents 移动目录 



rm  删除文件/文件夹 

rm file.txt 删文件

rm -r folder 删除文件夹 

 



三、权限管理

chmod修改文件读写执行权限

chmod 数字(ugo) 文件

r=4,w=2,x=1

7：rwx 6:rw 5:rx 4:r

ls -l 查看权限

第一位：文件类型；后面9位：所有者 | 用户组 | 其他用户



chown修改文件所有者

sudo chown 用户:用户组 文件 

 



四、进程控制

top 实时查看CPU、内存、所有进程（q退出）



ps aux 列出全部进程快照



kill

进程PID ：终止进程 

kill -9 PID 强制杀死（暴力终止）



systemctl ：管理systemd系统服务  

systemctl status ssh     查看ssh服务状态

systemctl start ssh      启动服务

systemctl stop ssh       停止服务

systemctl enable ssh     设置开机自启

 



五、文件系统目录结构

/ ：根目录，所有目录起点

/home ：普通用户家目录，你的用户文件都在这里

/etc ：系统配置文件（ssh、环境变量、服务配置）

/var ：动态数据，日志、缓存、数据库文件

/dev ：设备文件（硬盘、串口）

 

绝对路径：从  /  开始 

相对路径：相对于当前所在目录 

 . 代表当前目录

 .. 上级目录

 

 

 

六、常用命令行工具

A.Vim

1. 普通模式（默认）：

浏览、删除、复制

i 进入插入模式

 : 进入命令模式

2. 插入模式：输入文字； Esc 退回普通模式

3. 命令模式：

:w  保存

:q  退出

:wq  保存并退出

:q!  强制退出，不保存

dd  删除一行， u 撤销

x 删除

 

B.Tmux 

会话：后台保存整套工作环境，断开SSH/关闭终端程序不停止

窗口：同会话内多个标签页

窗格：一个窗口切分成多个小终端  

tmux new -s 名       创建命名会话

tmux ls               查看所有会话

tmux attach -s 名    重新接入会话

Ctrl+b 

 d ：脱离会话（后台继续运行程序）

 % ：垂直分屏（左右）

 " ：水平分屏（上下）

 方向键：切换窗格

 c ：新建窗口标签

 x ：关闭当前窗格

 

C.grep / awk / sed

 grep "关键词" 文件 ：在文件里搜索匹配的行

 awk ：按列解析文本，提取数据

 sed ：批量替换、修改文本

 

 

七、SSH远程连接

ssh 用户名@主机IP，默认端口22



密码登录：输入目标主机用户密码

密钥登录

ssh-keygen     生成公私密钥对

id_rsa:私钥

id_rsa.pub:公钥

公钥传到远程主机ssh-copy-id 远程



scp：本地和远程机器传输文件

本地文件传到远程

scp 文件 远程:/home/ang

远程文件下载到本地

scp 远程:/home/ang/文件 ./

 

配置别名

vim ~/.ssh/config

Host robot

  HostName 192.168.1.100

  User ang

  Port 22

### 实践
<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791624743218-c584a4fa-0be4-4ed5-b2b8-972dd5eb3782.png)

安装培训所需的编译、网络、版本控制和终端工具

<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791624910089-148d23ce-ed4a-465f-a67c-be3ee7fb35b2.png)

安装、配置 VS Code

<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625035920-88f954d6-fd5d-4be4-b9d4-cf23232234d1.png)<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625073647-6b521f60-34aa-4a60-9ae9-4693856e689c.png)<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625117056-ea358c73-e92a-49ba-aa60-448a61b2cbff.png)<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625117264-4c8a3248-1889-4e82-b1e6-b1e9f9d127ae.png)<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625283626-a5e185e2-0ca1-4a5c-9288-c6fee70ba6d8.png)

验证安装培训所需的编译、网络、版本控制和终端工具，都成功了

<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625324957-d522b06b-6d78-4dcd-b92e-6173f8ed407e.png)

npm版本问题，下不了pm2

<!-- 这是一张图片，ocr 内容为： -->
![](https://cdn.nlark.com/yuque/0/2026/png/72555997/1791625189442-5cc45274-2f88-4f07-8e2c-0f08c7b7e069.png)

从nvm下载安装pm2

