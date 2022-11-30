
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 将给定数组排序
     * @param arr int整型vector 待排序的数组
     * @return int整型vector
     */
    vector<int> MySort(vector<int>& arr) {
        // write code here
        int n = arr.size();
        for(int i=0;i<n;i++){
            int minn =arr[i];
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<minn){
                    minn=arr[j];
                    mini=j;
                }
            }
            swap(arr[i],arr[mini]);
        }
        return arr;
    }
};