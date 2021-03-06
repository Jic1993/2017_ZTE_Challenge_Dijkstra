# 2017_ZTE_Challenge_Dijkstra

## 问题描述

  详见：[迪杰斯特拉派初赛赛题](https://github.com/Jic1993/2017_ZTE_Challenge_Dijkstra/blob/master/%E8%BF%AA%E6%9D%B0%E6%96%AF%E7%89%B9%E6%8B%89%E6%B4%BE%E5%88%9D%E8%B5%9B%E8%B5%9B%E9%A2%98%E5%8C%85/%E8%BF%AA%E6%9D%B0%E6%96%AF%E7%89%B9%E6%8B%89%E6%B4%BE%E5%88%9D%E8%B5%9B%E8%B5%9B%E9%A2%98.pdf)
  
  简单来说就是一个带约束的图搜索问题


## 运行环境： 

Windows10  DevC++ 5.11 TDM-GCC 4.9.2 64-bit Release

注： 因为用到了C++11的特性，可能需要在编译选项中添加 -std=c++11
（ 如果是使用DevC++直接打开工程文件，则请忽略这一配置步骤，工程中已经配置好了^^）

## 输入说明：

标准输入被重定向到 "board.txt"

1. 图中节点个数N（节点编号从0~N-1）

2. 图的二维邻接矩阵board[N][N] ( board[i][j] = the cost of edge(i, j), board[i][j] = -1 means blocked )

3. 起点和终点                   如：  0  17

4. 红边个数，红遍对应的节点编号   如： 1   11 12

5. 绿边个数，绿边对应的节点编号	  如： 2   2 4 13 14

6. 绿点个数，绿点的编号          如： 2   7 12

7. 最大跳数 maxHop 		          如： 12


如下所示是一个输入范例：
```
18

 0	 3	 1	 1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1
 3	 0	 1	-1	 1	-1	-1	-1	-1	 4	-1	-1	-1	-1	-1	-1	-1	-1
 1	 1	 0	 1	 2	 1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1
 1	-1	 1	 0	-1	 2	 2	 1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1
-1	 1	 2	-1	 0	 1	-1	-1	-1	 1	-1	-1	-1	-1	-1	-1	-1	-1
-1	-1	 1	 2	 1	 0	 1	-1	-1	 3	 1	-1	 3	-1	-1	-1	-1	-1
-1	-1	-1	 2	-1	 1	 0	 1	 2	-1	-1	-1	 2	 4	 3	-1	-1	-1
-1	-1	-1	 1	-1	-1	 1	 0	 1	-1	-1	-1	-1	-1	-1	-1	-1	-1
-1	-1	-1	-1	-1	-1	 2	 1	 0	-1	-1	-1	-1	-1	 1	 3	-1	-1
-1	 4	-1	-1	 1	 3	-1	-1	-1	 0	 1	 1	-1	-1	-1	-1	-1	-1
-1	-1	-1	-1	-1	 1	-1	-1	-1	 1	 0	 1	 2	-1	-1	-1	-1	-1
-1	-1	-1	-1	-1	-1	-1	-1	-1	 1	 1	 0	 1	-1	-1	-1	 1	-1
-1	-1	-1	-1	-1	 3	 2	-1	-1	-1	 2	 1	 0	 2	-1	-1	 1	-1
-1	-1	-1	-1	-1	-1	 4	-1	-1	-1	-1	-1	 2	 0	 1	 2	 2	 1
-1	-1	-1	-1	-1	-1	 3	-1	 1	-1	-1	-1	-1	 1	 0	 1	-1	-1
-1	-1	-1	-1	-1	-1	-1	-1	 3	-1	-1	-1	-1	 2	 1	 0	-1	 4
-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	 1	 1	 2	-1	-1	 0	 1
-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	-1	 1	-1	 4	 1	 0

0 17

1
11 12

2
2 4
13 14

2
7
12

12
```

## 输出说明：

  最优路径，若无解则输出No Paths！
  
## 编译好的可执行文件: 

Project_Heuristic.exe        使用启发式策略

Project_nonHeuristic.exe     不使用启发式策略
