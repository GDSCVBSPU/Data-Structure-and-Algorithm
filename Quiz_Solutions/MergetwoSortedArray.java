class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        //edge case
        if(m>0 && n==0){
            return;
        }
        
        int i=m-1, j=n-1, l = nums1.length-1;
        
        /*
        checking for the maximum element btw arr1 and arr2 and put that at the last index of         the arr1
        */
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[l] = nums1[i];
                i--;
                l--;
            }else{
                nums1[l] = nums2[j];
                j--;
                l--;
            }
            
        }
        
        //if the l and i which pointing in the same arr get equal that means our arr become //sorted becasue the given arr is alrady sorted in which we are merging the arr2 and return
        if(i == l){
            return;
        }
        
        //if there is elements are left in the 2 array then shift all the element of arr2 in         //to arr1 at index l becaue arr2 is already in sorted order.
        while(j>=0){
            nums1[l] = nums2[j];
            l--;
            j--;
        }
        
    }
}
