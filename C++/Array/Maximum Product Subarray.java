//brute 
class Solution {
    public static long maxProductBruteForce(int[] nums) {
        long maxProduct = Long.MIN_VALUE;
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            long product = 1;
            for (int j = i; j < n; j++) {
                product *= nums[j];
                maxProduct = Math.max(maxProduct, product);
            }
        }

        return maxProduct;
    }
}


//optimized
class Solution {
    public static long maxProduct(int[] arr, int n) {

        long maxProduct = Long.MIN_VALUE;
        long prod = 1;

        // Left to Right pass
        for (int i = 0; i < n; i++) {
            prod *= arr[i];
            maxProduct = Math.max(maxProduct, prod);

            if (prod == 0) prod = 1;
        }

        prod = 1;

        // Right to Left pass
        for (int i = n - 1; i >= 0; i--) {
            prod *= arr[i];
            maxProduct = Math.max(maxProduct, prod);

            if (prod == 0) prod = 1;
        }

        return maxProduct;
    }
}
