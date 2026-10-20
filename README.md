<div align="center">

# 51 MCU Learning Repo

Small C51 programs from the 8051 microcontroller course at Hubei Three Gorges Polytechnic — LEDs, buzzers, buttons, and one very dramatic sound-and-light alarm.

Every folder pairs its C source with the compiled .hex — rebuild it in Keil if you feel like it, or flash the ready-made hex and skip straight to the blinking.

<br>

<a href="http://www.tgc.edu.cn">
  <img src="https://img.shields.io/badge/TGC-Official-blue" alt="TGC Official">
</a>
&nbsp;&nbsp;
<a href="https://v.douyin.com/BNZKom-4MRs/">
  <img src="https://img.shields.io/badge/Douyin-Yuzijiang-red?style=flat-square&logoColor=white" alt="Douyin Yuzijiang">
</a>
&nbsp;&nbsp;
<a href="#">
  <img src="https://img.shields.io/badge/Made%20with-C51-black" alt="Made with C51">
</a>

<br><br>

</div>

- Chip: AT89C51, written in Keil C51 (`#include <reg51.h>`)
- Each folder is one experiment: wire it up, build the HEX, flash it, watch it blink
- Timing done the classic way — an unhealthy amount of `delay()` loops
- Reference freely, just don't sell it

---

## 📁 Programs

| Folder | Description |
| ------ | ----------- |
| LED依次熄灭-ex1 | All 8 LEDs light up together, then go out one by one |
| 蜂鸣器鸣叫-ex2 | Buzzer beeping continuously |
| 按键左右闪-ex3 | Buttons blink the left / right LED groups (left / right / double flash) |
| LED流水灯-ex4-1 | Circular-shift flowing LED (`_crol_`) |
| LED流水灯-ex4-2 | Pattern flowing LED |
| 流水灯模式切换-ex5 | 4 buttons switch between 4 flowing-LED modes (K1, K3: normal chase; K2, K4: continuous chase; K1+K3 together: all off) |
| LED报警器-ex5 | Sound-and-light alarm: press S1 to start the alarm, S2 to stop it |
| 抢答器-ex6 | 4-player quiz buzzer: whoever presses first wins, and the 7-segment display shows their number |
| 按键数字显示-ex6-2 | Buttons pick a digit (0–3) and the 7-segment display shows it |

---

## 🛠️ Build & Flash (Keil C51)

```text
1. Create a project in Keil uVision and select AT89C51 as the chip
2. Add the .c file from the corresponding folder to the project
3. Build to generate the HEX file (or just use the ready-made .hex in the folder)
4. Flash the HEX into the MCU with a programmer
```

---

## 📄 Reference

- `普中-2&普中-3&普中-4开发板原理图.pdf` — schematic of the PuZhong dev board, useful when wiring things up
