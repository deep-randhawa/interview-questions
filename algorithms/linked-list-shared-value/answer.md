Create a hashmap of integers to integers. Initialize values to 0.

For every node in the first list, increment that value's value in the hashmap. The hashmap is maintaining a count of each value in the list (though really it is never used).

For every node in the second list:  
If there is a collision in the hash table, then both lists contain that number.  
If you care about saving the collided values, then add them to an external list and continue the search.

O(n)
