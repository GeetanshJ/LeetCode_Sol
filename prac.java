import java.util.*;
public class prac {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int count = 1;

        String str = inp.nextLine();
        String ans = "";
        char[] arr = str.toCharArray();
        Arrays.sort(arr);

       for(int i = 0;i < arr.length; i++){
            if(i == arr.length - 1 || arr[i] != arr[i+1] ){
                ans += arr[i];
                ans += (char)(count + '0');
                count = 1;
            }

            else{
                count++;
            }
        }

        System.out.println(ans);

    }
}
