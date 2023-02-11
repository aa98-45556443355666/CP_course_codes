// finding subsets
#include <bits/stdc++.h>
using namespace std;

void findSubsets(char *inp, char *op, int i, int j)
{
    // base case
    if (inp[i] == '\0')
    {
        op[j] = '\0';

        if (op[0] == '\0')
        {
            cout << "NUll";
        }
        cout << op << endl;
        return;
    }

    // rec case
    // including
    op[j] = inp[i];
    findSubsets(inp, op, i + 1, j + 1);

    // excluding
    findSubsets(inp, op, i + 1, j);
}

int main()
{

    char inp[100];
    char op[100];

    cin >> inp;
    findSubsets(inp, op, 0, 0);

    return 0;
}

// Generating Brackets
// #include <bits/stdc++.h>
// using namespace std;

// void genBrackets(string op, int n, int openCnt, int closeCnt, int i)
// {
//     // base case
//     if (i == 2 * n)
//     {
//         cout << op << endl;
//     }

//     // open
//     if (openCnt < n)
//     {
//         genBrackets(op + '(', n, openCnt + 1, closeCnt, i + 1);
//     }

//     // close
//     if (closeCnt < openCnt)
//     {
//         genBrackets(op + ')', n, openCnt, closeCnt + 1, i + 1);
//     }
// }

// int main()
// {
//     string op;
//     int inp;
//     cin >> inp;

//     genBrackets(op, inp, 0, 0, 0);

//     return 0;
// }

// N queen problem

// #include <iostream>
// using namespace std;

// bool canPlace(int board[][20], int n, int x, int y)
// {

//     // Column
//     for (int k = 0; k < x; k++)
//     {
//         if (board[k][y] == 1)
//         {
//             return false;
//         }
//     }
//     // Left Diag
//     int i = x;
//     int j = y;
//     while (i >= 0 and j >= 0)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i--;
//         j--;
//     }

//     // Right Diag
//     i = x;
//     j = y;
//     while (i >= 0 and j < n)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i--;
//         j++;
//     }
//     return true;
// }

// void printBoard(int n, int board[][20])
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// bool solveNQueen(int n, int board[][20], int i)
// {
//     // base case
//     if (i == n)
//     {
//         // Print the board
//         printBoard(n, board);
//         return true;
//     }

//     // rec case
//     // try to place a queen in every row
//     for (int j = 0; j < n; j++)
//     {
//         // whether the current i,j is safe or not
//         if (canPlace(board, n, i, j))
//         {
//             board[i][j] = 1;
//             bool success = solveNQueen(n, board, i + 1);
//             if (success)
//             {
//                 return true;
//             }
//             // backtrack
//             board[i][j] = 0;
//         }
//     }
//     return false;
// }

// int main()
// {
//     // your code goes here
//     int board[20][20] = {0};
//     int n;
//     cin >> n;

//     solveNQueen(n, board, 0);

//     return 0;
// }

// N queen all ways

// #include <iostream>
// using namespace std;

// bool canPlace(int board[][20], int n, int x, int y)
// {

//     // Column
//     for (int k = 0; k < x; k++)
//     {
//         if (board[k][y] == 1)
//         {
//             return false;
//         }
//     }
//     // Left Diag
//     int i = x;
//     int j = y;
//     while (i >= 0 and j >= 0)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i--;
//         j--;
//     }

//     // Right Diag
//     i = x;
//     j = y;
//     while (i >= 0 and j < n)
//     {
//         if (board[i][j] == 1)
//         {
//             return false;
//         }
//         i--;
//         j++;
//     }
//     return true;
// }

// void printBoard(int n, int board[][20])
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }
// // Return type
// int solveNQueen(int n, int board[][20], int i)
// {
//     // base case
//     if (i == n)
//     {
//         // Print the board
//         printBoard(n, board);
//         return 1;
//     }

//     // rec case
//     // try to place a queen in every row
//     int ways = 0;
//     for (int j = 0; j < n; j++)
//     {
//         // whether the current i,j is safe or not
//         if (canPlace(board, n, i, j))
//         {
//             board[i][j] = 1;
//             ways += solveNQueen(n, board, i + 1);
//             // backtrack
//             board[i][j] = 0;
//         }
//     }
//     return ways;
// }

// int main()
// {
//     // your code goes here
//     int board[20][20] = {0};
//     int n;
//     cin >> n;

//     solveNQueen(n, board, 0);

//     return 0;
// }

// Sudoku solver

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isSafe(int mat[][9], int i, int j, int no)
// {

//     // Check for row and col
//     for (int k = 0; k < 9; k++)
//     {
//         if (mat[k][j] == no || mat[i][k] == no)
//         {
//             return false;
//         }
//     }
//     // check for subgrid

//     int sx = (i / 3) * 3;
//     int sy = (j / 3) * 3;

//     for (int x = sx; x < sx + 3; x++)
//     {
//         for (int y = sy; y < sy + 3; y++)
//         {
//             if (mat[x][y] == no)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool solveSudoku(int mat[][9], int i, int j, int n)
// {
//     // base case
//     if (i == n)
//     {
//         // print the solution later
//         for (int i = 0; i < 9; i++)
//         {
//             for (int j = 0; j < 9; j++)
//             {
//                 cout << mat[i][j] << " ";
//             }
//             cout << endl;
//         }

//         return true;
//     }

//     // rec case
//     if (j == n)
//     {
//         return solveSudoku(mat, i + 1, 0, n);
//     }

//     // skip  the prefilled cell
//     if (mat[i][j] != 0)
//     {
//         return solveSudoku(mat, i, j + 1, n);
//     }

//     // cell to be filled
//     // try out all possibilites
//     for (int no = 1; no <= n; no++)
//     {
//         // whether it is safe to place the number or not
//         if (isSafe(mat, i, j, no))
//         {

//             mat[i][j] = no;
//             bool solveSubproblem = solveSudoku(mat, i, j + 1, n);
//             if (solveSubproblem == true)
//             {
//                 return true;
//             }
//         }
//     }
//     // if no option works, backtracking
//     mat[i][j] = 0;
//     return false;
// }

// int main()
// {
//     int n = 9;
//     int mat[9][9] =
//         {{5, 3, 0, 0, 7, 0, 0, 0, 0},
//          {6, 0, 0, 1, 9, 5, 0, 0, 0},
//          {0, 9, 8, 0, 0, 0, 0, 6, 0},
//          {8, 0, 0, 0, 6, 0, 0, 0, 3},
//          {4, 0, 0, 8, 0, 3, 0, 0, 1},
//          {7, 0, 0, 0, 2, 0, 0, 0, 6},
//          {0, 6, 0, 0, 0, 0, 2, 8, 0},
//          {0, 0, 0, 4, 1, 9, 0, 0, 5},
//          {0, 0, 0, 0, 8, 0, 0, 7, 9}};

//     if (!solveSudoku(mat, 0, 0, n))
//     {
//         cout << "No solution exists!";
//     }
// }