# renderer
不懂就学，重头认识渲染，当前进度：计算机图形学第四版。

#### 此项目为学习使用，需要一些前置步骤：

##### 下载并连接freeglut
1. [Opgl官网](https://www.opengl.org/) -> [Coding Resources](https://www.opengl.org/resources/) -> [GLUT and Utiltiy Libraries](https://www.opengl.org/resources/libraries/) -> [About GLUT](https://www.opengl.org/resources/libraries/glut/)。  
这里现在提示到，原来的glut已经很久没有维护了，现在使用新版的freeglut，不仅有持续的维护和扩展，还有方便的协议许可。  
2. [freeglut官网](http://freeglut.sourceforge.net/) -> [Downloads](http://freeglut.sourceforge.net/index.php#download) -> [freeglut 3.2.1](https://sourceforge.net/projects/freeglut/files/freeglut/3.2.1/freeglut-3.2.1.tar.gz/download?use_mirror=udomain&download=) 下载最新的稳定版本，Released: 29 September 2019。

##### 使用 freeglut 静态库 (ps:图片存放在pictures中)
1. 建立自己的工程，我的工程，即为当前的git工程。
2. 下载并解压前文的freeglut。
3. 找到目录下 README.cmake，按文件步骤执行即可（其实就是选择来源目录和输出目录），用 [cmake](https://cmake.org/download/) 生成freeglut vs工程。  
此处需要注意指定vs版本，我的是vs2015 win64。小知识点：[cpu架构参考文章 x86，x86_64，arm](https://blog.csdn.net/gerwels_ji/article/details/83001611)
4. 将生成的glut静态工程添加到自己的工程
![将生成的glut静态工程添加到自己的工程](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/1_添加glut现有项目.png)
5. 
