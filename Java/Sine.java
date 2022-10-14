package Java;

class Sine {

    static void printSinWave(int amplitude,
            int waveLength) {

        int is = 1, os = 2;

        for (int i = 1; i <= amplitude; i++) {

            for (int j = 1; j <= waveLength; j++) {
                for (int k = 1; k <= os; k++) {
                    System.out.printf(" ");
                }
                System.out.printf("0");
                for (int k = 1; k <= is; k++)
                    System.out.printf(" ");
                System.out.printf("0");
                for (int k = 1; k <= os; k++)
                    System.out.printf(" ");

                System.out.printf(" ");
            }
            os = (i + 1 != amplitude) ? 1 : 0;
            is = (i + 1 != amplitude) ? 3 : 5;

            System.out.printf("\n");
        }
    }

    public static void main(String[] args) {
        printSinWave(6, 10);
    }
}
