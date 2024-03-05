import java.util.ArrayList;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>(
                Arrays.asList(3, 7, 9, 2, 5, 5, 8, 5, 6, 3, 4, 7, 3, 1)
        );
//        list.add(3);
//        list.add(7);
//        list.add(9);
//        list.add(2);
//        list.add(5);
//        list.add(5);
//        list.add(8);
//        list.add(5);
//        list.add(6);
//        list.add(3);
//        list.add(4);
//        list.add(7);
//        list.add(3);-
//        list.add(1);

        System.out.println(list);
        System.out.println(removeBadPairs(list));
    }

    public static ArrayList<Integer> removeBadPairs(ArrayList<Integer> list) {
        for (int i = 0; i < list.size() - 1; i += 2) {
            if (list.get(i) > list.get(i + 1)) {
                list.remove(i);
                list.remove(i);
                i -= 2;
            }
        }

        return list;
    }
}
