# 目录结构

## sample：
### basic：
#### chapter_03：  
1. 示例：sample_01_drawLine：创建glut窗口过程，绘制简单线段。  

2. 问题：线段未能画出：  
&emsp; 参考：https://www.cnblogs.com/DOMLX/p/12054507.html  
&emsp; 发现犯了同样的错误，应该使用GL_LINES。

#### chapter_04：  
1. 概念模糊：

    1.1. glLoadIdentiy()初始化矩阵但不改变模式。  
    &emsp; 参考：https://blog.csdn.net/shuaihj/article/details/7228265  
    1.2. setPixel函数并非gl本身的函数。  

2. 示例：sample_02_basicPrimitive：基础图元绘制
   
    2.1. 绘制点。  
    2.2. 绘制单线段-分割线。  
    2.3. 绘制折线。  
    2.4. 绘制闭合折线。  