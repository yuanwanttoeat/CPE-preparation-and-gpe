#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char map[1000][1000] = {0};
bool visited[1000][1000] = {0};

void DFS( int, int );

int main(){
  int N, H, W, maxarea;
  while( scanf( "%d", &N ) != EOF ){

    // get input and put data into array:map
    for( int i = 1 ; i <= N ; i++ ){
      scanf( "%d%d", &H, &W );
      getchar();
      memset( visited, 0, sizeof(visited) );
      int letters[30] = {0}; // lands have different type , this array count the number of certain type
      maxarea = 0;
      for( int j = 1 ; j <= H ; j++ ){
        for( int k = 1 ; k <= W ; k++ )
          scanf( "%c", &map[j][k] );
        getchar();
      }

    // record which position have been visited
      for( int j = 1 ; j <= H ; j++ )
        for( int k = 1 ; k <= W ; k++ ){
          if( !visited[j][k] ){
            maxarea = max( ++letters[map[j][k]-'a'], maxarea );
            DFS( j, k );
          }
        }

    // print land from area large to low , if area are the same , then print by alphabet
      printf( "World #%d\n", i );
      for( int j = maxarea ; j >= 1 ; j-- )
        for( int k = 0 ; k < 26 ; k++ )
          if( letters[k] == j )
            printf( "%c: %d\n", 'a'+k, j );
    }
  }
  return 0;
}

// use depth first search to calculate how large the land area are
// if up,down,left,right have the same type, then continue visited
void DFS( int x, int y ){
  visited[x][y] = 1;
  if( map[x+1][y] == map[x][y] && !visited[x+1][y] ) DFS(x+1,y);
  if( map[x-1][y] == map[x][y] && !visited[x-1][y] ) DFS(x-1,y);
  if( map[x][y+1] == map[x][y] && !visited[x][y+1] ) DFS(x,y+1);
  if( map[x][y-1] == map[x][y] && !visited[x][y-1] ) DFS(x,y-1);
}
