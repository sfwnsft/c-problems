/* Output: 

1, 0,
3, 0, 1, 2,
5, 0, 1, 2, 3, 4,
7, 0, 1, 2, 3, 4, 5, 6,
9, 0, 1, 2, 3, 4, 5, 6, 7, 8,

*/

// Reasoning: Outer loop runs i=0 to 9. if (i % 2 == 0) continue skips even numbers (0,2,4,6,8). 
// For odd i, inner loop prints j from 0 to i-1, then newline.
