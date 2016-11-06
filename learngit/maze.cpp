/*==============================================================================
    > File Name: maze.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月27日 星期四 21时07分03秒
 ==========================================================================*/

/* 
 使用BFS解决迷宫问题
 
 
 * */ 
#include<iostream>
#include<queue>
#include<vector>
 using  namespace std;
 struct MaNode{
     int x;
     int y;
     MaNode * pre;
     MaNode( int x1= 0 , int y1= 0 ,MaNode *p = NULL ):x(x1),y(y1),pre(p)
     {
     }
 };
 const  int maxr = 5 ;
 const  int maxc= 5 ;
queue<MaNode*> qmaze;
vector<MaNode*> vemaze; // 保存节点，以便释放
 
 int maze[maxr][maxc] = {
     0 , 0 , 0 , 0 , 0 ,
     0 , 1 , 0 , 1 , 0 ,
     0 , 0 , 0 , 0 , 0 ,
     0 , 1 , 1 , 1 , 0 ,
     0 , 0 , 0 , 1 , 0 ,
 };
 void visit( int x, int y, MaNode *p )   // 访问节点
 {
     struct MaNode *p2 = new MaNode(x,y,p);
     // p2->x = x;
     // p2->y =y;
     //   p2->pre = p; 
      maze[x][y] = 2 ; // 标识已经访问
     qmaze.push(p2);
 }
 void bfs() // 宽度优先搜索
 {
     MaNode *head = new MaNode;
     qmaze.push(head);
     while ( ! qmaze.empty() )
     {
         MaNode *p= qmaze.front();
         // int x= p->x+1;
         // int y= p->y+1; 
         vemaze.push_back(p);
         qmaze.pop();
         if ( p->x ==maxr- 1 && p->y==maxc- 1 )
         {
              break ;
         }
         if (p->x + 1 <=maxr && maze[p->x+ 1 ][p->y] == 0   )
         {
             visit(p->x+ 1 ,p-> y,p);
         }
         if (p->y+ 1 <=maxc&& maze[p->x][p->y+ 1 ] == 0 )
         {
           visit(p->x,p->y+ 1 ,p);
         }
        if ( p->x- 1 >= 0   && maze[p->x- 1 ][p->y] == 0 )
        {
        
        
        visit(p->x- 1 ,p-> y,p);
        }
       if ( p->y- 1 >= 0   && maze[p->x][p->y - 1 ] == 0 )
        {
        
        visit(p->x,p->y- 1 ,p);
        }
       
     }
 
 
 }
 void printPath()   // 打印路径
 {
     MaNode *p = vemaze[vemaze.size()- 1 ];
     while ( p != NULL )
     {
         cout<< " ( " <<p->x<< " , " <<p->y<< " ) " << endl;
     
         p=p-> pre;
     }
     // cout<<endl; 
 }
 void destroy()   // 销毁节点
 {
     for (size_t i= 0 ; i<vemaze .size() ; i++ )
     {
         delete vemaze[i];
     }
 }
 int main()
 {
 
 
     bfs();
     printPath();
    destroy();
    return  0 ;
}
