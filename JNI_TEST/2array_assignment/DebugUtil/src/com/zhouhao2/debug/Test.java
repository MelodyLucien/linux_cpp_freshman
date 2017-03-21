package com.zhouhao2.debug;


 /**
   g++ -I/home/zhouhao2/jdk/jdk1.8.0_45/include/  -I/home/zhouhao2/jdk/jdk1.8.0_45/include/linux/ -I. -fPIC -shared -o libtest.so  main.cpp
   sudo cp libtest.so /usr/lib/

  * @author zhouhao2
  *
  */
public class Test {
	public static int[][] ints;
	
	static{
		System.loadLibrary("test");
	}
	
	
	public static void main(String[] args) {
		System.out.println(System.getProperty("java.library.path"));
		initArray();
/*		try {
			Thread.sleep(3000);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}*/
		printOutArray();
	}
	
	private static void printOutArray() {
		int length=ints.length;
		int i=0;
		for(i=0;i<length;i++){
			int[] array=ints[i];
			int length2=array.length;
			for(int j =0;j<length2;j++){
				System.out.print(array[j]);
			}
			System.out.println();
		}
	}

	public static  native void initArray();
}