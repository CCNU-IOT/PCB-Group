# Typora图床

#### 1. 什么是图床：

- 所谓图床，其实可以就相当于我们手机上的相册，不过他是在线的，而且是对大家开放的，大家都可以访问查看，但是编辑删除这些功能仅限于拥有者。

#### 2. 为什么要使用图床：

- 我们在Typora等记录笔记时，如果使用了直接裁剪的图片放入笔记，在当下的笔记中可以看到图片，那么如果把笔记上传到GitHub，或者想要把笔记转移到其他的记笔记软件，会发现图片不再正常显示。
- 如果把图片的形式变成链接，那么无论在什么地方，只要有网络，图片总能正常显示，而图床的功能就是把随意的一张图片上传到某个地方，在那里图片有其对应的网络链接。

#### 3. 准备工作：

- 一个Github账号

#### 4. 搭建过程：

- 登录你的Github创建一个仓库
  - 填写相关资料，一般只需要选一个合适的仓库名，然后确保仓库为public，其他的默认<img src="https://cdn.jsdelivr.net/gh/RuthlessZhang/img/v2-79c5e7f0d53bf92b27ade85b244aadcf_1440w.webp" alt="img" style="zoom:50%;" />

#### 5. 上传图片：

- 通过上面的步骤，我们的图床时搭建好了，但是通过传统的方法向 Github 上传图片太麻烦了，这里我们推荐使用一个开源图床工具 [PicGo](https://link.zhihu.com/?target=https%3A//molunerfinn.com/PicGo/) 来作为我们的图片上传工具

- 配置PicGo：

  - 在Github创建一个token

    - `Settings -> Developer settings -> Personal access tokens`，最后点击 `generate new token`
    - <img src="https://cdn.jsdelivr.net/gh/RuthlessZhang/img/v2-73d5ad9cf5ca397cb2015a69e16266a3_1440w.webp" alt="img" style="zoom: 50%;" />

    - `token` 生成，注意它只会显示一次，所以你最好把它复制下来到你的备忘录存好，方便下次使用，否则下次有需要重新新建

  - 配置 PicGo，依次打开 图床设置 -> Github 图床
  - 填写相关信息，最后点击 `确定`即可，点击设为默认图床
    - 分支名一般都是main
    - 仓库名就是Github用户名/仓库名
    - 设定Token我们生成的Token
    - 指定存储路径空白
    - 设定自定义域名https://cdn.jsdelivr.net/gh/用户名/仓库名

#### 6. Typora配置

- 打开Typora的偏好设置
  - 选择图像，按照以下配置：![image-20230928164904151](https://cdn.jsdelivr.net/gh/RuthlessZhang/img/image-20230928164904151.png)
- 验证图片上传一般出现以下情况：
  - ![img](https://cdn.jsdelivr.net/gh/RuthlessZhang/img/44b8d6159b085639fb3bc7f4e21b7a82.png)
    - 解决方法：打开PicGo设置，点击设置Server选项，将监听地址改为127.0.0.1，监听端口为36677
  - ![img](https://cdn.jsdelivr.net/gh/RuthlessZhang/img/b0ea78ea12a488fdbf3b75fd08752564.png)
    - 解决方法：打开PicGo设置，将时间戳重命名打开