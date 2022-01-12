package leetcode;

public class container_with_most_water {
    public static void main(String[] args) {
        int[] height = { 7,100,200,8};
        int i = 0, j = height.length-1,area=0,temp;
        while(i<j){
            temp=(j-i)*Math.min(height[i], height[j]);
            if(height[i]<=height[j])
                i++;
            else
                j--;
            if(temp>area)
                area=temp;
        }
        System.out.println(area);
    }

}
