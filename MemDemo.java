import java.util.ArrayList;
import java.util.List;

public class MemDemo {
    public static void main(String[] args) {
        List<int[]> big = new ArrayList<>();
        for (int i = 0; i < 1000; i++) {
            big.add(new int[1024]);
        }

        big = null;

        System.gc();

        System.out.println("Done.");
    }
}