I don't have a solution to the bonus question yet

Assume the board is a 2-dimensional array [m,m]

Maintain three separate arrays:  
H[m]  
V[m]  
D[m]  
Initialize all values to 0

On every play at position [i,j], increment the value at H[i] and V[j]  
If i==j, increment D[i] as well

if H[i] or V[j] or D[i] == m, then the person who just played won.

O(C)
