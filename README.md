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
4. 将生成的glut静态工程添加到自己的工程：  
    
  4.1. 添加现有项目：  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/1_添加glut现有项目.png)  
    
  4.2. 选择cmake生成的freeglut_static.vcxproj：  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/2_找到glut的静态库.png)  
    
  4.3. 修改解决方案属性：  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/3_设置工程属性.png)  
    
  4.4. 添加依赖项：（在生成主工程的时候也会生成freeglut_static.lib）  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/4_勾选项目依赖.png)  
    
  4.5. 统一编译平台：（我的是x64）  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/5_统一为x64.png)  
    
  4.6. 选择主工程与导入的glut工程属性，统一目标平台版本：（这里要看自己的版本了）  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/6_统一目标平台.png)  
    
  4.7. 统一中间与输出目录：（这样编译好的freeglut_static.lib也会到exe相同的目录。当然，也可以按自己的方式配置，这里是最简单快速的方式）  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/7_统一输出目录.png)  
    
  4.8. 添加附加目录，把gl的目录包含进来：  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/8_添加附加目录.png)  
    
  4.9. 添加库目录，freeglut_static.lib目录：（就是上面统一的输出目录，这里直接写了个是路径）  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/9_添加库目录.png)  
    
  4.10. 预编译宏，FREEGLUT_STATIC：  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/10_添加预编译头文件.png)  
    
  4.11. 添加运行代码，#include "freeglut.h" 以及 glutInit(&argv, argc) 进行编译测试：  
  ![image](https://github.com/SammyTorky/renderer/raw/master/pictures/glut快速配置并使用/11_运行.png)  

####至此，一个快速可运行的freeglut的唤境就搭好了。
