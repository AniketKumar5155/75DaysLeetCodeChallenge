class Solution {
    public int maxArea(int[] height) {
        int left = 0, right = height.length-1,currentArea, area = Integer.MIN_VALUE;
        while(left < right){
            currentArea = (Math.min(height[left], height[right]) *  (right - left));
            area = Math.max(area, currentArea);
            if(height[left] < height[right]) left++;
            else right--;
        }
        return area;
    }
}