# M5Atom-BT-PrintScreen
Bluetooth HIDでPrintScreenを押すデバイス。

M5StickC版→https://github.com/bluepost59/M5StickC-BT-PrintScreen

# 必要要件
* M5Atom (Lite or Matrix)
* [ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard)

# 使い方
電源を入れるとLEDが赤く点灯し、Bluetoothペアリングが待ち状態になります。

この状態でスマートホンなどでBluetoothで新規デバイスを検索すると、「M5AtomPrintScreen」という名前のデバイスが検出されるので、ペアリングします。ペアリングに成功するとLEDが青く点灯します。

この状態でボタンを押すと接続先へPrintScreenが送信されます。Androidであればスクリーンショットが保存されます。