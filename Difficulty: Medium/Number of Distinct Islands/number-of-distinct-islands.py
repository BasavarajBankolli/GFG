# User function Template for python3

import sys
from typing import List

sys.setrecursionlimit(10 ** 8)


class Solution:
    def countDistinctIslands(self, grid: List[List[int]]) -> int:
        # code here
        rows = len(grid)
        cols = len(grid[0])

        vis = [[0] * cols for _ in range(rows)]
        dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        def dfs(r, c, s):
            if r < 0 or r >= rows or c < 0 or c >= cols or grid[r][c] == 0:
                return

            s.add((r, c))
            vis[r][c] = 1

            for dr, dc in dirs:
                nr, nc = r + dr, c + dc
                if 0 <= nr < rows and 0 <= nc < cols and not vis[nr][nc]:
                    dfs(nr, nc, s)

        res = set()
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 1 and vis[r][c] == 0:
                    st = set()
                    dfs(r, c, st)
                    shape= []
                    for x, y in st:
                        shape.append((r-x, c-y))

                    shape.sort()
                    res.add(tuple(shape))

        return len(res)