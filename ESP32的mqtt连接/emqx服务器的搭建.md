### EMQX服务器的搭建——windows系统版

最好是不要用mosquitto搭建本地mqtt服务器，因为会麻烦很多

#### 下载EMQX

+ 下载地址：https://www.emqx.com/en/try?product=broker

+ OS里面选择自己电脑对应的系统（我是用window系统的）
+ 安装完之后解压（**最好解压的路径不要有中文，否则可能会报错**）
+ 记住自己解压路径在哪里



#### 配置EMQX

+ 文件解压好之后进入解压路径下的bin目录下

+ 在文件路径中敲入cmd：

  ![img](https://cdn.jsdelivr.net/gh/Hiraethsev/hiraeth-img@main/202310112112560.png)

+ 在弹出的DOS命令行中输入`emqx start`,而后如果出现这样两行，说明可以进入下一步了

![image-20231011211402425](https://cdn.jsdelivr.net/gh/Hiraethsev/hiraeth-img@main/202310112114544.png)



#### 调试EMQX

+ 打开链接 http://127.0.0.1:18083/#/clients

+ 登录时的默认账号密码为：

  ```
  用户名：admin
  密码： public
  ```

+ 登录进去系统会要求修改密码，此时只需要修改为你自己的密码即可。

+ 创建连接：

  ![img](https://cdn.jsdelivr.net/gh/Hiraethsev/hiraeth-img@main/202310112130687.png)

+ 查看是否连接进端口：

  ![image-20231011213037062](https://cdn.jsdelivr.net/gh/Hiraethsev/hiraeth-img@main/202310112130302.png)

+ okkkkkk