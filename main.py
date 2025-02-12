import serial
import pyautogui

ser = serial.Serial('COM5', 9600)

while True:
    if ser.in_waiting > 0:
        data = ser.readline().decode('uft-8').rstrip()

        if data == 'u':
            pyautogui.press('up')
            print('success')

        elif data == 'd':
            pyautogui.press('down')  
            print('success')
       
        elif data == 'l':
            pyautogui.press('left')  
            print('success')

        elif data == 'r':
            pyautogui.press('right')  
            print('success')