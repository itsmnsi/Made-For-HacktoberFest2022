import pyautogui
import webbrowser as wb
import time
wb.open("https://web.whatsapp.com/")
time.sleep(40)
for i in range(50):
    pyautogui.press("h")
    pyautogui.press("i")
    pyautogui.press("enter")