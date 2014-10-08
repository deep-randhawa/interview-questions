This problem is trivial in O(n^2) time. This solution is still O(n^2) but attempts to optimize a little bit.

Maintain two arrays `Vx[m]` and `Vo[m]`. Initialize all values to True.

For each row:  
Maintain a count for this row.  
If `[i,j]=="X"` then mark `Vo[j]` as False and increment count  
If `[i,j]=="O"` then mark `Vx[j]` as False and decrement count  
If `abs(count) == m` then someone just won with a row. X if count is positive, O if count is negative.

Scan over `Vx` and `Vo`.  
If any True values are found, that column just won. X if found in `Vx` and O if found in `Vo`.  

Do a final manual scan down each possible diagonal. 

The algorithm behind this solution should solve the bonus question as well.
