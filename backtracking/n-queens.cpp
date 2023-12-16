#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
  // left check
  int i = row;
  int j = col;
  while (j >= 0)
  {
    if (board[i][j] == 'Q')
    {
      return false;
    }
    j--;
  }
  i = row;
  j = col;

  // top diagonal check
  while (i >= 0 && j >= 0)
  {
    if (board[i][j] == 'Q')
    {
      return false;
    }
    j--;
    i--;
  }
  i = row;
  j = col;

  // bottom diagonal check
  while (i < n && j >= 0)
  {
    if (board[i][j] == 'Q')
    {
      return false;
    }
    i++;
    j--;
  }

  return true;
}

void printAns(vector<vector<char>> &board)

{
  for (int i = 0; i < board.size(); i++)
  {
    for (int j = 0; j < board[i].size(); j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void solve(vector<vector<char>> &board, int col, int n, int &totalSolution)
{
  if (col >= n)
  {
    printAns(board);
    totalSolution++;
    return;
  }

  // trying all position of queen
  for (int row = 0; row < n; row++)
  {
    if (isSafe(board, row, col, n))
    {
      board[row][col] = 'Q';
      solve(board, col + 1, n, totalSolution);
      // backtracking
      board[row][col] = '.';
    }
  }
}

int main()
{
  int n; // size of the chessboard
  cout << "Enter grid size" << endl;
  cin >> n;
  int col = 0;
  int totalSolution = 0;
  vector<vector<char>> board(n, vector<char>(n, '.'));
  solve(board, col, n, totalSolution);

  cout << "Total Solution Possible are " << totalSolution;
}