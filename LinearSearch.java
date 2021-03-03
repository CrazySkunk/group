public class LinearSearch{
    public static void main(String[] args) {
        int[] list={10,20,30,40,50,60,70,80,90,100};
        int key = 50;
        System.out.println(key+" is found at position "+search(list,key));
    }
    public static int search(int[] array,int key){
        for(int i=0;i<array.length;i++){
            if(array[i]==key){
                return i;
            }
        }
        return -1;
    }
}