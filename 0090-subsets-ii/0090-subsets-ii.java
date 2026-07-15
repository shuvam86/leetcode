class Solution {
    List<List<Integer>> res = new ArrayList<>();
    
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        fun(nums,0,new ArrayList<>());
        return res;     
    }

    public void fun(int[] nums, int index, List<Integer> cur) {
        if(index == nums.length) {
            res.add(new ArrayList<>(cur));
            return;
        }

        cur.add(nums[index]);
        fun(nums,index+1,cur);
        cur.remove(cur.size() - 1);

        while(index+1<nums.length && nums[index] == nums[index+1]) {
            index++;
        }

        fun(nums, index+1, cur);

    }

}