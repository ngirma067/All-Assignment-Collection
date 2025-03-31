# All-Assignment-Collection
## Student Information
- **Name**: Natnael Girma
- **Student ID**: 0425/23
- **Course**: DSA
## Individual Assignment One

## Smaller-Number-In-Array
## Algorithm
1. Initialize the smallest number with the first element of the array.
2. Iterate through the array starting from the second element.
3. Compare each element with the current smallest number.
4. Update the smallest number if a smaller element is found.
5. Return the smallest number after checking all elements.

# The-second-largest-number
## Algorithm
1. Initialize two variables, largest and secondLargest, with the smallest possible integer value (e.g., INT_MIN).
2. Iterate through the array.
3. For each element:
   - If the element is greater than largest, update secondLargest to the old largest, and then update largest to the current element.
   - If the element is less than largest but greater than secondLargest, update secondLargest.
4. Return secondLargest after iterating through the entire array.
