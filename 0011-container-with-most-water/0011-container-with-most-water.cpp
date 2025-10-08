class Solution {
public:
    int maxArea(vector<int>& height) {
        int x=0;
        int y=height.size()-1;
        int area=0;
        while(x<y)
        {
            area=max(area, (y-x)*min(height[x],height[y]));
            if(height[x]>height[y])
            {
                y--;
            }
            else
            {
                x++;
            }
        }
        return area;
    }
};