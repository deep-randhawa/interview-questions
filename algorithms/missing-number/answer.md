Given a list of `n` items, we would expect a sum of all the values to be equal to `n(n+1)/2`

Add up all the numbers currently in the list --> O(n)

Subtract the calculated sum from the expected sum

---

If the list is provided sorted, you can binary search for each number 1 ... n to find which one is missing. This would be O(log(n)+log(n)+...+log(n)), which is actually faster than O(n) but is a stupid solution for obvious reasons. 
