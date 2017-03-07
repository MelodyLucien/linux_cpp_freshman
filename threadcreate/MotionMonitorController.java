package com.hisense.motionkit;

/**
 * control the start and stop and define the interface of callback
 * so compile command：
 * g++ -I/home/zhouhao2/jdk/jdk1.8.0_45/include/  -I/home/zhouhao2/jdk/jdk1.8.0_45/include/linux/ -I. -fPIC -shared -o libmotion.so  motiontest.cpp
 * 
 * @author zhouhao2
 *
 */
public class MotionMonitorController {

	private MotionMonitorController() {
	}

	private static boolean isStarted = false;
	
	static {
		System.loadLibrary("motion");
	}

	private static native void startMonitor();

	private static native void stopMonitor();

	public static synchronized void start() {
		if (!isStarted)
			startMonitor();
		isStarted = true;
	}

	public static synchronized void stop() {
		stopMonitor();
		isStarted = false;
	}
	
	public static void main(String[] args) {
		System.out.println(System.getProperty("java.library.path"));
		start();
		stop();
	}
}
