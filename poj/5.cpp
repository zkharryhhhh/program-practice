//对于广度优先搜索来说，有几个重要的点，
//1、一个存储信息的数组，一个标记数组，一个坐标交换数组，一个队列，类型为节点（可能包含坐标，路径或时间）
//2、初始化时，要清空队列，初始化标记数组，输入信息给存储数组 
//3、起点为初始状态，应放入队列作为队头，并标记起始状态为已访问 
//4、BFS操作时需知道终点信息（终点坐标）  取队首元素u，u=Q.front() u出队Q.pop()
//    依次拓展其所有相邻节点，计算新坐标，然后判断其合法性，若不合法则丢弃，若合法则新建状态节点加入队列，并对相应坐标进行标记
//    然后判断其是否是终点，若是终点则BFS结束，根据要求返回值，多为最短路径或者最短时间 
