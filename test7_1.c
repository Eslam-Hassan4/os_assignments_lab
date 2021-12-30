
#include<stdio.h>
#include<malloc.h>
void main()
{


  Summing implements Runnable {

    int x;

     Summing(int x) {
        this.x = x;
    }

     void run() {
        addRondom();
    }

     void addRondom() {
        Random rand = new Random();
        int n = rand.nextInt(10) + 1;
        printif("Created number : " + n);
        synchronized (this) {
            x += n;
        }
    }
}





 static void main(String[] args) {
    int base_num = 0;

    Summing sum2 = new Summing(base_num);

    Thread t0 = new Thread(sum2);
    Thread t1 = new Thread(sum2);
    Thread t2 = new Thread(sum2);
    Thread t3 = new Thread(sum2);
    Thread t4 = new Thread(sum2);

    t0.start();
    t1.start();
    t2.start();
    t3.start();
    t4.start();

    try {
        t0.join();
        t1.join();
        t2.join();
        t3.join();
        t4.join();
    } catch (InterruptedException e) {
        e.printStackTrace();
    }

    System.out.print("the final result: " + sum2.x);
}