<div align="center">

# 51 MCU Learning Repo

A collection of C51 programs written in class (and after class) while learning the 8051 microcontroller at Hubei Three Gorges Polytechnic.

Only C source files for the 8051 (Keil C51) are committed here — no build artifacts.

<br>

<a href="http://www.tgc.edu.cn">
  <img src="https://img.shields.io/badge/TGC-Official-blue" alt="TGC Official">
</a>
&nbsp;&nbsp;&nbsp;
<a href="https://v.douyin.com/BNZKom-4MRs/">
  <img src="https://img.shields.io/badge/Douyin-Yuzijiang-red?style=flat-square&logoColor=white" alt="Douyin Yuzijiang">
</a>
&nbsp;&nbsp;&nbsp;
<a href="#">
  <img src="https://img.shields.io/badge/Made%20with-C51-black" alt="Made with C51">
</a>

<br><br>

</div>

- Chip: STC89C51 / AT89C51, written in Keil C51 (`#include <reg51.h>`)
- Course experiments, after-class exercises and practice programs
- All files are C51 source code, handy for learning and review
- Feel free to reference, but not for commercial use
- Honestly I have no idea what I wrote

---

## 📁 Programs

| Folder | Description |
| ------ | ----------- |
| ex1 | 8 LEDs turn on one by one, then off one by one |
| ex2 | Buzzer beeping continuously |
| ex3 | Buttons control left/right LED blinking (left / right / double flash) |
| ex5 | 4 buttons switch between 4 flowing-LED modes (K1, K3: normal chase; K2, K4: continuous chase; K1+K3 together: all off) |
| LED流水灯-ex4-1 | Circular-shift flowing LED (`_crol_`) |
| LED流水灯-ex4-2 | Pattern flowing LED |
| LED报警器-ex5 | Sound-and-light alarm: press S1 to start the alarm, S2 to stop it |

---

## 🛠️ Build & Flash (Keil C51)

```text
1. Create a project in Keil uVision and select AT89C51 as the chip
2. Add the .c file from the corresponding folder to the project
3. Build to generate the HEX file
4. Flash the HEX into the MCU with a programmer
```

---

## 📄 Reference

- `普中-2&普中-3&普中-4开发板原理图.pdf` — schematic of the PuZhong dev board, useful when wiring things up
